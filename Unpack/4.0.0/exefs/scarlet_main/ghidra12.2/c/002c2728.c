/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002c2728; name: FUN_002c2728
 */


void FUN_002c2728(char *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (*param_1 == '\0') {
    return;
  }
  puVar8 = *(undefined8 **)(param_1 + 0x40);
  if (puVar8 != (undefined8 *)0x0) {
    plVar1 = puVar8 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)*puVar8)(puVar8);
      FUN_0049e790(PTR_LAB_047cba48,puVar8);
      uVar7 = *(ulong *)(param_1 + 8);
      goto joined_r0x002c2764;
    }
  }
  uVar7 = *(ulong *)(param_1 + 8);
joined_r0x002c2764:
  uVar4 = uVar7 & 1;
  if ((uVar7 & 1) == 0) {
    pcVar6 = param_1 + 0x10;
  }
  else {
    pcVar6 = *(char **)(param_1 + 0x10);
  }
  uVar7 = uVar7 >> 1;
  if ((uVar7 != 0) && (pcVar6 != (char *)0x0)) {
    pcVar6 = pcVar6 + uVar7 * 0x18;
    do {
      uVar7 = uVar7 - 1;
      FUN_0028bf34(pcVar6 + -0x18,*(undefined8 *)(pcVar6 + -0x10));
      pcVar6 = pcVar6 + -0x18;
    } while (uVar7 != 0);
    uVar4 = *(ulong *)(param_1 + 8) & 1;
  }
  if (uVar4 != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x10));
  }
  *param_1 = '\0';
  return;
}


