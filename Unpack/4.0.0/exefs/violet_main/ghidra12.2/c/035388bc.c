/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 035388bc; name: FUN_035388bc
 */


void FUN_035388bc(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  lVar4 = *(long *)(param_1 + 0x10);
  puVar2 = *(undefined4 **)(lVar4 + 0x140);
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  if (*(long *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x60);
    local_50 = *(undefined8 *)(lVar4 + 0x30);
    local_48 = *(undefined4 *)(lVar4 + 0x2c);
    local_38 = 0xff;
    local_30 = 0xff;
    local_28 = 0;
    local_40 = 0;
    iVar1 = FUN_034deb98(param_1,&local_50,*puVar2,puVar2[2]);
    *(int *)(param_1 + 0x28) = iVar1;
    if (iVar1 != 0) goto LAB_03538950;
    lVar4 = *(long *)(param_1 + 0x10);
  }
  uVar3 = 0;
  if (*(long *)(lVar4 + 0x140) != 0) {
    uVar3 = *(undefined4 *)(*(long *)(lVar4 + 0x140) + 4);
  }
  *(undefined4 *)(param_1 + 0x28) = uVar3;
LAB_03538950:
  FUN_035387bc(param_1);
  return;
}


