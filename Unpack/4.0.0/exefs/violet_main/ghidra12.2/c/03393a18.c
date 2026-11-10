/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03393a18; name: FUN_03393a18
 */


void FUN_03393a18(undefined1 (*param_1) [16],long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  puVar4 = (ulong *)PTR_DAT_047e5da8;
  if ((int)((ulong)(*(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48)) >> 2) * -0x55555555 < 2)
  {
    if (*(int *)(param_2 + 0x40) - (int)*(undefined8 *)(param_2 + 0x38) < 1) {
      *(undefined8 *)(*param_1 + 8) = 0;
      *(undefined8 *)param_1[1] = 0;
      *(undefined8 *)*param_1 = 0;
    }
    else {
      *(undefined8 *)*param_1 = *(undefined8 *)(param_2 + 0x38);
      *(ulong **)(*param_1 + 8) = puVar4;
      do {
        uVar5 = *puVar4;
        if (((uint)uVar5 >> 2 & 1) != 0) {
          uVar5 = puVar4[(uVar5 >> 1 & 1) + (uVar5 & 1) + 2];
          goto LAB_03393afc;
        }
        puVar4 = (ulong *)puVar4[1];
      } while (puVar4 != (ulong *)0x0);
      uVar5 = 0;
LAB_03393afc:
      *(ulong *)param_1[1] = uVar5;
      if ((uVar5 & 1) != 0) {
        piVar1 = (int *)((uVar5 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
  }
  else {
    auVar6 = FUN_03393e1c(param_2,*(long *)(param_2 + 0x48) + 0xc);
    *param_1 = auVar6;
    for (puVar4 = auVar6._8_8_; puVar4 != (ulong *)0x0; puVar4 = (ulong *)puVar4[1]) {
      uVar5 = *puVar4;
      if (((uint)uVar5 >> 2 & 1) != 0) {
        uVar5 = puVar4[(uVar5 >> 1 & 1) + (uVar5 & 1) + 2];
        goto LAB_03393ac4;
      }
    }
    uVar5 = 0;
LAB_03393ac4:
    *(ulong *)param_1[1] = uVar5;
    if ((uVar5 & 1) != 0) {
      piVar1 = (int *)((uVar5 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return;
}


