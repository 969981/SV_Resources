/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00359b10; name: FUN_00359b10
 */


undefined8 FUN_00359b10(long *param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  if (param_1[10] != 0) {
    return 0;
  }
  FUN_0038db40(param_1 + 0xb);
  lVar6 = *param_1;
  puVar1 = (ulong *)(lVar6 + 0x28);
  do {
    uVar7 = *(ulong *)(lVar6 + 0x28);
    uVar3 = uVar7 + param_2;
    if (*(ulong *)(lVar6 + 0x30) < uVar3) {
      uVar8 = 0;
LAB_00359bb8:
      FUN_0038db60(param_1 + 0xb);
      return uVar8;
    }
    while (*puVar1 == uVar7) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        if (0 < param_2) {
          plVar2 = param_1 + 9;
          do {
            lVar6 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar6 + param_2;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar6 != 0) {
            lVar6 = param_1[0xf];
            param_1[0xf] = lVar6 - param_2;
            if (lVar6 - param_2 < 0) {
              uVar8 = 1;
              if ((char)param_1[0x12] == '\0') {
                *(undefined1 *)(param_1 + 0x12) = 1;
                FUN_00350c0c(*(undefined8 *)(*param_1 + 0x10),param_1 + 1,0);
              }
            }
            else {
              uVar8 = 1;
            }
            goto LAB_00359bb8;
          }
        }
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


