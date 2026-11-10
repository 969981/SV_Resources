/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00377b00; name: FUN_00377b00
 */


void FUN_00377b00(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  ulong *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  
  param_2[0x1c] = 0x7fffffffffffffff;
  param_2[0x19] = 0;
  param_2[0x18] = 0;
  param_2[0x1b] = 0;
  param_2[0x1a] = 0;
  param_2[0x15] = 0;
  param_2[0x14] = 0;
  param_2[0x17] = 0;
  param_2[0x16] = 0;
  param_2[0x11] = 0;
  param_2[0x10] = 0;
  param_2[0x13] = 0;
  param_2[0x12] = 0;
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_2[0xf] = 0;
  param_2[0xe] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xb] = 0;
  param_2[10] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[0x1c] = *(long *)(param_1 + 0xe0);
  puVar8 = *(ulong **)(param_1 + 0x10);
  if (puVar8 != (ulong *)0x0) {
    lVar9 = 0;
    do {
      uVar6 = *puVar8;
      puVar2 = (ulong *)(param_3 + lVar9 * 0x20);
      uVar3 = (uint)uVar6 & 3;
      if (1 < uVar3) {
        plVar1 = (long *)((uVar6 & 0xfffffffffffffffc) + 0x40);
        if (uVar3 == 2) {
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        else {
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      *puVar2 = uVar6;
      lVar7 = *(long *)(uVar6 & 0xfffffffffffffffc);
      lVar9 = lVar9 + 1;
      if (((lVar7 == 0) || (*(int *)(lVar7 + 8) != 0)) ||
         (uVar3 = *(uint *)(*(long *)(uVar6 & 0xfffffffffffffffc) + 0x28), 0x17 < uVar3)) {
LAB_00377be4:
        uVar6 = param_2[3];
        puVar2[1] = 0;
        puVar2[2] = uVar6;
        plVar1 = param_2 + 2;
        if (uVar6 != 0) {
          plVar1 = (long *)(uVar6 + 8);
        }
        puVar2[3] = 0;
        *plVar1 = (long)puVar2;
        param_2[3] = (long)puVar2;
        *param_2 = *param_2 + 1;
      }
      else {
        if (param_2[(ulong)uVar3 + 4] == 0) {
          param_2[1] = param_2[1] + 1;
          param_2[(ulong)uVar3 + 4] = (long)puVar2;
          goto LAB_00377be4;
        }
        lVar7 = FUN_00377cc0();
        if (lVar7 == 0) goto LAB_00377be4;
      }
      puVar8 = (ulong *)puVar8[1];
    } while (puVar8 != (ulong *)0x0);
  }
  return;
}


