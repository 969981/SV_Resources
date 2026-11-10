/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034417f4; name: FUN_034417f4
 */


long * FUN_034417f4(long param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  *param_4 = 0;
  puVar3 = PTR_DAT_047e2fd0;
  plVar7 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(7,200);
  puVar4 = PTR_DAT_047e6ee8;
  if (plVar7 == (long *)0x0) {
    uVar8 = (ulong)*(uint *)(PTR_DAT_047e6ee8 + 8);
    if (*(uint *)(PTR_DAT_047e6ee8 + 8) != 0) {
      uVar10 = 0;
      do {
        lVar9 = *(long *)(*(long *)puVar4 + uVar10 * 8);
        if (lVar9 != 0) {
          bVar5 = FUN_0343cd64(lVar9,lVar9 == param_1,100,lVar9 + 0x280);
          FUN_0343cd64(lVar9,lVar9 == param_1 & (bVar5 ^ 1),100,lVar9 + 0x278);
          uVar8 = (ulong)*(uint *)(puVar4 + 8);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar8);
    }
    plVar7 = (long *)(**(code **)(puVar3 + 0x10))(7,200);
    if (plVar7 == (long *)0x0) {
      return (long *)0x0;
    }
  }
  *plVar7 = (long)(PTR_DAT_047e6ef0 + 0x10);
  plVar7[1] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  nn::os::InitializeMutex((MutexType *)(plVar7 + 5),true,0);
  *(undefined4 *)(plVar7 + 0x13) = 0xffffffff;
  *plVar7 = (long)&PTR_FUN_047c0070;
  plVar7[0xb] = 0;
  *(undefined4 *)((long)plVar7 + 0x67) = 0;
  *(undefined2 *)((long)plVar7 + 0x6b) = 0;
  plVar7[0x12] = 0;
  *(undefined2 *)((long)plVar7 + 0x9c) = 0;
  *(undefined4 *)(plVar7 + 0x14) = 0;
  *(undefined4 *)(plVar7 + 0x15) = 0;
  *(undefined1 *)((long)plVar7 + 0xac) = 1;
  *(undefined2 *)((long)plVar7 + 0x65) = 0;
  plVar7[0x18] = 0;
  plVar7[10] = param_1;
  plVar7[0x10] = 0;
  plVar7[0x11] = 0;
  plVar7[0x16] = 0;
  plVar7[0x17] = 0;
  plVar7[0xe] = (long)&PTR_FUN_047c0158;
  plVar7[0xf] = 0;
  if (((-1 < *param_2) &&
      (uVar6 = (**(code **)(**(long **)(param_1 + 0x610) + 0x18))
                         (*(long **)(param_1 + 0x610),param_2), uVar6 != 0)) &&
     (uVar1 = *(uint *)(param_1 + 0x618), uVar6 <= uVar1)) {
    uVar2 = 0;
    if (uVar6 != 0) {
      uVar2 = uVar1 / uVar6;
    }
    if (uVar1 == uVar2 * uVar6) {
      *(uint *)(plVar7 + 0xc) = uVar6;
      *param_4 = plVar7 + 0xe;
      return plVar7;
    }
  }
  *(undefined1 *)(plVar7 + 0xd) = 1;
  *(undefined1 *)((long)plVar7 + 0x6c) = 0;
  (**(code **)*plVar7)(plVar7);
  (**(code **)(puVar3 + 0x30))(7,plVar7);
  return (long *)0x0;
}


