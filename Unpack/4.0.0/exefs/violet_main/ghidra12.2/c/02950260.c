/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02950260; name: FUN_02950260
 */


void FUN_02950260(long param_1,undefined4 param_2,short param_3,int param_4)

{
  long lVar1;
  undefined8 local_60;
  undefined1 local_58;
  undefined2 local_57;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  
  lVar1 = FUN_018d5cec(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  if ((lVar1 == 0) || (*(short *)(lVar1 + 0x718) != param_3)) {
    local_58 = param_4 != 0;
    local_57 = 1;
    local_4c = 0;
    local_44 = 0;
    local_3c = 0;
    local_34 = 0;
    local_60 = (ulong)CONCAT24(param_3,param_2);
    local_54 = 0x82004c;
    uStack_50 = param_2;
    FUN_019079a0(param_1,&local_60);
  }
  return;
}


