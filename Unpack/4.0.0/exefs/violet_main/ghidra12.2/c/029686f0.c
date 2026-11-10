/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029686f0; name: FUN_029686f0
 */


bool FUN_029686f0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int local_50;
  uint local_4c;
  undefined4 local_48;
  int iStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x20);
  iVar1 = 0;
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0xc);
  }
  if (iVar1 == param_2) {
    local_4c = 7;
    local_50 = param_2;
    FUN_0293ecc0(param_1,&local_50);
    FUN_029685f0(param_1,param_2);
    local_4c = local_4c & 0xffffff00;
    local_30 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_28 = 0;
    local_48 = 0x8200ac;
    local_50 = param_2;
    iStack_44 = param_2;
    FUN_01907920(param_1,&local_50);
  }
  return iVar1 == param_2;
}


