/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 035011e0; name: FUN_035011e0
 */


undefined8 * FUN_035011e0(long param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar7 = *(uint *)(param_1 + 0x1c);
  if (uVar7 <= uVar1) {
    iVar5 = uVar7 + (uVar7 >> 1);
    if (uVar7 == 0) {
      iVar5 = 1;
    }
    uVar6 = FUN_035093b0(param_1 + 0x10,iVar5);
    if ((uVar6 & 1) == 0) {
      return (undefined8 *)0x0;
    }
    uVar7 = *(uint *)(param_1 + 0x1c);
  }
  if (uVar1 < uVar7) {
    uVar1 = *(uint *)(param_1 + 0x18);
    lVar8 = *(long *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x18) = uVar1 + 1;
    if (lVar8 != 0) {
      lVar9 = lVar8 + (ulong)uVar1 * 0x30;
      puVar10 = (undefined8 *)(lVar8 + (ulong)uVar1 * 0x30);
      *(undefined4 *)(lVar9 + 8) = 0;
      *puVar10 = 0;
      *(undefined8 *)(lVar9 + 0xc) = 0x2b;
      *(undefined8 *)(lVar9 + 0x28) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(undefined8 *)(lVar9 + 0x20) = 0;
      puVar4 = PTR_DAT_047e7210;
      do {
        lVar8 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(ulong *)puVar4 = lVar8 + 1U;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      iVar5 = FUN_035012ec(puVar10,lVar8 + 1U & 0xffffffffffffff,param_2,
                           *(undefined4 *)PTR_DAT_047e6d08,param_3);
      if (iVar5 == 1) {
        return puVar10;
      }
      FUN_0350499c(*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x30 + -0x30);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      return (undefined8 *)0x0;
    }
  }
  return (undefined8 *)0x0;
}


