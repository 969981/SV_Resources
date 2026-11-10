/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d663e4; name: FUN_00d663e4
 */


void FUN_00d663e4(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  
  if (((*(char *)(param_1 + 0x4ac) == '\0') && (*(int *)(param_1 + 0x4a8) == 1)) &&
     (0 < *(int *)(param_1 + 0x360))) {
    lVar1 = param_1 + 0x2e0;
    auVar4 = FUN_00d6f768(lVar1);
    *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_1 + 0x31c);
    *(undefined2 *)(param_1 + 0x4ac) = 1;
    *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_1 + 0x328);
    *(undefined1 (*) [16])(param_1 + 0x4b0) = auVar4;
    *(undefined8 *)(param_1 + 0x4c8) = *(undefined8 *)(param_1 + 0x308);
    *(undefined8 *)(param_1 + 0x4c0) = *(undefined8 *)(param_1 + 0x300);
    *(undefined4 *)(param_1 + 0x4e4) = 0;
    *(undefined8 *)(param_1 + 0x4d8) = *(undefined8 *)(param_1 + 800);
    *(undefined4 *)(param_1 + 0x510) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_1 + 0x32c);
    *(undefined4 *)(param_1 + 0x540) = 0;
    if (*(char *)(param_1 + 0x14f) != '\0') {
      *(undefined4 *)(param_1 + 0x4e0) = 0x22;
    }
    if (0 < *(int *)(param_1 + 0x360)) {
      auVar4 = FUN_00d6f768(lVar1);
      uVar2 = *(uint *)(param_1 + 0x540);
      if (uVar2 < 2) {
        *(uint *)(param_1 + 0x540) = uVar2 + 1;
        *(undefined1 (*) [16])(param_1 + (ulong)uVar2 * 0x10 + 0x520) = auVar4;
      }
      if (0 < *(int *)(param_1 + 0x360)) {
        auVar4 = FUN_00d6f768(lVar1);
        uVar2 = *(uint *)(param_1 + 0x540);
        if (uVar2 < 2) {
          *(uint *)(param_1 + 0x540) = uVar2 + 1;
          *(undefined1 (*) [16])(param_1 + (ulong)uVar2 * 0x10 + 0x520) = auVar4;
        }
        iVar3 = *(int *)(param_1 + 0x360);
        while (0 < iVar3) {
          auVar4 = FUN_00d6f768(lVar1);
          uVar2 = *(uint *)(param_1 + 0x540);
          if (uVar2 < 2) {
            *(uint *)(param_1 + 0x540) = uVar2 + 1;
            *(undefined1 (*) [16])(param_1 + (ulong)uVar2 * 0x10 + 0x520) = auVar4;
          }
          iVar3 = *(int *)(param_1 + 0x360);
        }
      }
    }
  }
  return;
}


