/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a5157c; name: FUN_01a5157c
 */


void FUN_01a5157c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((*(long *)(param_1 + 0x90) == 0) &&
     (((*(char *)(param_1 + 0x60) != '\0' ||
       ((*(long *)(param_1 + 0x48) != 0 && (*(short *)(*(long *)(param_1 + 0x48) + 0x1a) != 0)))) &&
      (*(long *)(param_1 + 0x58) != 0)))) {
    FUN_01a51660(&local_50,*(undefined8 *)(param_1 + 0x40));
    uVar2 = local_50;
    local_50 = 0;
    lVar1 = *(long *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = uVar2;
    if (lVar1 != 0) {
      FUN_01c6896c(param_1 + 0x98);
    }
    *(undefined8 *)(param_1 + 0x98) = local_48;
    *(undefined8 *)(param_1 + 0xa0) = uStack_40;
    *(undefined8 *)(param_1 + 0xa8) = local_38;
    FUN_00c43ef0(param_1 + 0x70,param_3);
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_3 + 0x18);
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    FUN_00f21154(param_1);
  }
  return;
}


