/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02956350; name: FUN_02956350
 */


void FUN_02956350(long param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  long lVar2;
  int local_60;
  undefined1 local_5c;
  undefined2 local_58;
  undefined2 local_56;
  int local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x18);
  iVar1 = 0;
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0xc);
  }
  if (iVar1 == param_2) {
    FUN_01852230(param_1,param_2);
    local_5c = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_56 = 0x82;
    local_60 = param_2;
    local_58 = param_3;
    local_54 = param_2;
    FUN_01907920(param_1,&local_60);
    FUN_01852150(param_1,param_2);
  }
  return;
}


