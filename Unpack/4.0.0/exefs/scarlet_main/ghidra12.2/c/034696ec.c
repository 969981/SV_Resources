/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034696ec; name: FUN_034696ec
 */


undefined8 FUN_034696ec(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*(long *)(param_2 + 0x18) != 0) {
    puVar1 = (ulong *)(param_1 + 0xf8);
    uVar7 = *(ulong *)(param_2 + 0x20);
    for (puVar4 = (ulong *)*puVar1; puVar4 != (ulong *)0x0;
        puVar4 = (ulong *)(*puVar4 & 0x3fffffffffffffff)) {
      while (uVar6 = *puVar4, (uVar6 >> 0x3e & 1) != 0) {
        uVar5 = uVar6 & 0x3fffffffffffffff | 0x8000000000000000;
        while (*puVar4 == uVar6) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar3) {
            *puVar4 = uVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            puVar4[1] = uVar7;
            do {
              while (*puVar4 != uVar5) {
                ClearExclusiveLocal();
              }
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
              if (bVar3) {
                *puVar4 = uVar6 & 0x3fffffffffffffff;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            goto LAB_034697c8;
          }
        }
        ClearExclusiveLocal();
      }
    }
    puVar4 = (ulong *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0x10,0x10);
    if (puVar4 != (ulong *)0x0) {
      puVar4[1] = uVar7;
      do {
        uVar7 = *puVar1;
        *puVar4 = uVar7;
        while (*puVar1 == uVar7) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = (ulong)puVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_034697c8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_034697c8:
  FUN_0346123c(param_1,param_2);
  if (*(char *)(param_2 + 0x10) != '\0') {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,*(undefined8 *)(param_2 + 8));
  }
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined1 *)(param_2 + 0x10) = 0;
  return 1;
}


