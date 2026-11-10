/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003774b0; name: FUN_003774b0
 */


void FUN_003774b0(long *param_1,ulong *param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = *(long *)(*param_2 & 0xfffffffffffffffc);
  if (((lVar7 != 0) && (*(int *)(lVar7 + 8) == 0)) &&
     (uVar4 = *(uint *)(*(long *)(*param_2 & 0xfffffffffffffffc) + 0x28), uVar4 < 0x18)) {
    param_1[1] = param_1[1] + -1;
    param_1[(ulong)uVar4 + 4] = 0;
  }
  uVar8 = param_2[1];
  uVar3 = param_2[2];
  if (uVar3 == 0) {
    param_1[2] = uVar8;
  }
  else {
    *(ulong *)(uVar3 + 8) = uVar8;
    uVar8 = param_2[1];
  }
  puVar2 = (ulong *)(param_1 + 3);
  if (uVar8 != 0) {
    puVar2 = (ulong *)(uVar8 + 0x10);
  }
  *puVar2 = uVar3;
  *param_1 = *param_1 + -1;
  uVar4 = (uint)*param_2 & 3;
  if (1 < uVar4) {
    uVar8 = *param_2 & 0xfffffffffffffffc;
    plVar1 = (long *)(uVar8 + 0x40);
    do {
      lVar7 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar7 + -1 == 0) {
      FUN_00376de0(uVar4,uVar8,*(undefined4 *)(uVar8 + 0x48));
      return;
    }
  }
  return;
}


