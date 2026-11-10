/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02728bd0; name: FUN_02728bd0
 */


void FUN_02728bd0(long param_1,long param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  char *__s1;
  
  lVar3 = *(long *)(param_1 + 0x38);
  FUN_00c41540(lVar3);
  __s1 = *(char **)(param_2 + 8);
  iVar1 = strcmp(__s1,PTR_s_ObjectAlpha_047e10b0);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)(lVar3 + 0x10c);
  }
  else {
    iVar1 = strcmp(__s1,PTR_s_OverrideRimPower_047dce38);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)(lVar3 + 0x110);
    }
    else {
      iVar1 = strcmp(__s1,PTR_s_ObjectWetScale_047e10b8);
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)(lVar3 + 0x114);
      }
      else {
        iVar1 = strcmp(__s1,PTR_s_OverrideRimIntensity_047dce40);
        if (iVar1 == 0) {
          puVar2 = (undefined4 *)(lVar3 + 0x118);
        }
        else {
          iVar1 = strcmp(__s1,PTR_s_OverrideRimWeight_047dce28);
          if (iVar1 != 0) {
            return;
          }
          puVar2 = (undefined4 *)(lVar3 + 0x15c);
        }
      }
    }
  }
  *puVar2 = *param_3;
  return;
}


