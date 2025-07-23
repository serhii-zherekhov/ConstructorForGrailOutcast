using UnityEngine;

public class Decoration : GridObject
{
    [SerializeField] private DecorationType _decorationType;
    private DecorationSetupType _decorationSetupType;

    private void Awake()
    {
        if(_decorationType == DecorationType.Tiny  ||
           _decorationType == DecorationType.Small ||
           _decorationType == DecorationType.SuperSmall)
        {
            _decorationSetupType = DecorationSetupType.Multiple;
        }
        else
        {
            _decorationSetupType = DecorationSetupType.Single;
        }
    }

    public override SaveObject Save()
    {
        SaveObject saveObject = base.Save();
        saveObject._onHexPosition = (int)OnHexPosition;
        return saveObject;
    }

    #region Properties
    public DecorationType DecorationType
    {
        get
        {
            return _decorationType;
        }
    }

    public DecorationSetupType SetupType
    {
        get
        {
            return _decorationSetupType;
        }
    }

    #endregion
}


