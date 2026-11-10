/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0022827c; name: FUN_0022827c
 */


void FUN_0022827c(long *param_1,undefined1 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 local_58 [2];
  ulong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  lVar5 = *param_1;
  (**(code **)(**(long **)(lVar5 + 0x40) + 0x20))(*(long **)(lVar5 + 0x40),*param_2);
  plVar1 = (long *)(lVar5 + 0x440);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    local_58[0] = *(undefined4 *)(lVar5 + 0x408);
    uStack_48 = *(undefined8 *)(lVar5 + 0x418);
    local_50 = *(ulong *)(lVar5 + 0x410);
    local_40 = *(undefined8 *)(lVar5 + 0x420);
    *(undefined8 *)(lVar5 + 0x420) = 0;
    *(undefined8 *)(lVar5 + 0x418) = 0;
    *(undefined8 *)(lVar5 + 0x410) = 0;
    uStack_30 = *(undefined8 *)(lVar5 + 0x430);
    local_38 = *(ulong *)(lVar5 + 0x428);
    local_28 = *(undefined8 *)(lVar5 + 0x438);
    *(undefined8 *)(lVar5 + 0x438) = 0;
    *(undefined8 *)(lVar5 + 0x430) = 0;
    *(undefined8 *)(lVar5 + 0x428) = 0;
    puVar6 = *(undefined8 **)(lVar5 + 0x40);
    uVar7 = *(undefined8 *)(lVar5 + 0x20);
    FUN_00226c78(lVar5);
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x120))(*(long **)PTR_DAT_047cbb08,uVar7);
    (**(code **)*puVar6)(puVar6,local_58);
    if ((local_38 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_28);
    }
    if ((local_50 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_40);
      return;
    }
  }
  return;
}


