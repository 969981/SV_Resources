/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fa4c08; name: FUN_00fa4c08
 */


void FUN_00fa4c08(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1[0x2f];
  *param_1 = &DAT_045d34d0;
  param_1[4] = &PTR_LAB_045d3508;
  param_1[0x2f] = 0;
  if (lVar5 != 0) {
    FUN_00fa4e5c(param_1 + 0x30);
  }
  if (*(char *)(param_1 + 0x25) != '\0') {
    if ((long *)param_1[0x29] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x29] + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x25) = 0;
  }
  if ((long *)param_1[0x24] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x24] + 0x20))();
  }
  if ((long *)param_1[0x20] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x20] + 0x20))();
  }
  if ((long *)param_1[0x1c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1c] + 0x20))();
  }
  lVar5 = param_1[0x12];
  if (lVar5 != 0) {
    lVar1 = param_1[0x14];
    plVar2 = (long *)param_1[0x15];
    param_1[0x13] = lVar5;
    uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar2,lVar5,lVar1 - lVar5,4);
        goto LAB_00fa4cac;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,4);
  }
LAB_00fa4cac:
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x10));
  FUN_00fa4d3c(param_1 + 6);
  return;
}


