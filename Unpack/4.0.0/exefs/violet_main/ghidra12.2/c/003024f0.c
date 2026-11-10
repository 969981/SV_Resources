/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003024f0; name: FUN_003024f0
 */


long FUN_003024f0(long param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined8 local_38;
  
  if (param_1 == 0) {
    if (param_4 != (undefined8 *)0x0) {
      pcVar4 = (char *)FUN_0038c780(0x14);
      *param_4 = pcVar4;
      pcVar4[0x10] = 't';
      uVar1 = s_crypter_is_nullptr__03c1686e._0_8_;
      pcVar4[0x11] = 'r';
      pcVar4[0x12] = '.';
      pcVar4[0x13] = '\0';
      *(undefined8 *)(pcVar4 + 8) = s_crypter_is_nullptr__03c1686e._8_8_;
      *(undefined8 *)pcVar4 = uVar1;
      return 0;
    }
  }
  else {
    lVar3 = FUN_0038c780(0x18);
    local_38 = 0;
    iVar2 = FUN_00302a70(param_1,&local_38,param_4);
    if (iVar2 != 0) {
      return 0;
    }
    iVar2 = FUN_003025c0(param_2 & 1,local_38,param_3,lVar3 + 0x10,param_4);
    if (iVar2 == 0) {
      *(long *)(lVar3 + 8) = param_1;
      return lVar3;
    }
  }
  return 0;
}


