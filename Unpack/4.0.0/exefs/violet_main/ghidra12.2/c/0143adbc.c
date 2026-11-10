/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0143adbc; name: FUN_0143adbc
 */


void FUN_0143adbc(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  
  uVar1 = (uint)param_3 & 0xff;
  lVar2 = 0;
  if (uVar1 < 5) {
    lVar2 = param_1 + (param_3 & 0xff) * 0x38 + 0x28;
  }
  uVar7 = (ulong)*(byte *)(lVar2 + 0x30);
  FUN_010a102c(param_2);
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      for (plVar5 = *(long **)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x290) + 8)
                                        + 0x50) + 0x38); plVar5 != (long *)0x0;
          plVar5 = (long *)*plVar5) {
        if ((*(uint *)((long)plVar5 + 0x14) == uVar1) &&
           ((uint)*(byte *)(plVar5 + 3) == ((uint)uVar8 & 0xff))) {
          iVar9 = *(int *)(plVar5 + 2);
          goto LAB_0143ae54;
        }
      }
      iVar9 = 0;
LAB_0143ae54:
      uVar6 = 0;
      do {
        if (((((uint)uVar6 & 0xff) < (uint)*(byte *)(lVar2 + 0x30)) &&
            (plVar5 = *(long **)(lVar2 + uVar6 * 8), plVar5 != (long *)0x0)) &&
           (uVar4 = (**(code **)(*plVar5 + 0x98))(plVar5), (int)uVar4 == iVar9)) {
          FUN_0143aeec(uVar4,param_2,lVar2,uVar6 & 0xffffffff);
          bVar3 = (**(code **)(*plVar5 + 0x2a0))(plVar5);
          *(byte *)(param_4 + uVar8) = bVar3 & 1;
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar7);
  }
  return;
}


