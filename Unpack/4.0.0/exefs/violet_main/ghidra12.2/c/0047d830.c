/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0047d830; name: FUN_0047d830
 */


undefined * FUN_0047d830(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return (undefined *)0x0;
  }
  iVar1 = FUN_003ebf70(PTR_PTR_044b7208,param_1);
  if ((iVar1 == 0) && (iVar1 = FUN_003ebf70(PTR_PTR_044b7210,param_2), iVar1 == 0)) {
    lVar2 = 0;
  }
  else {
    iVar1 = FUN_003ebf70(PTR_PTR_044b7220,param_1);
    if ((iVar1 == 0) && (iVar1 = FUN_003ebf70(PTR_PTR_044b7228,param_2), iVar1 == 0)) {
      lVar2 = 1;
    }
    else {
      iVar1 = FUN_003ebf70(PTR_PTR_044b7238,param_1);
      if ((iVar1 == 0) && (iVar1 = FUN_003ebf70(PTR_PTR_044b7240,param_2), iVar1 == 0)) {
        lVar2 = 2;
      }
      else {
        iVar1 = FUN_003ebf70(PTR_PTR_044b7250,param_1);
        if ((iVar1 == 0) && (iVar1 = FUN_003ebf70(PTR_PTR_044b7258,param_2), iVar1 == 0)) {
          lVar2 = 3;
        }
        else {
          iVar1 = FUN_003ebf70(PTR_PTR_044b7268,param_1);
          if ((iVar1 == 0) && (iVar1 = FUN_003ebf70(PTR_PTR_044b7270,param_2), iVar1 == 0)) {
            lVar2 = 4;
          }
          else {
            iVar1 = FUN_003ebf70(PTR_PTR_044b7280,param_1);
            if ((iVar1 == 0) && (iVar1 = FUN_003ebf70(PTR_PTR_044b7288,param_2), iVar1 == 0)) {
              lVar2 = 5;
            }
            else {
              iVar1 = FUN_003ebf70(PTR_PTR_044b7298,param_1);
              if (iVar1 != 0) {
                return (undefined *)0x0;
              }
              iVar1 = FUN_003ebf70(PTR_PTR_044b72a0,param_2);
              if (iVar1 != 0) {
                return (undefined *)0x0;
              }
              lVar2 = 6;
            }
          }
        }
      }
    }
  }
  return (&PTR_DAT_044b7200)[lVar2 * 3];
}


