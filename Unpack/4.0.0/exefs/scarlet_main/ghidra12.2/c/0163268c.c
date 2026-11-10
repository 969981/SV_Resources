/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0163268c; name: FUN_0163268c
 */


undefined1 FUN_0163268c(long param_1,long param_2,long *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  memset(param_4,0,0x8f);
  param_4[0x12] = 0;
  param_4[0x13] = 0;
  param_4[0x14] = 0;
  *(undefined2 *)(param_4 + 0x15) = 0;
  uVar3 = (**(code **)(*param_3 + 0x98))(param_3);
  bVar2 = *(byte *)(param_1 + 0xa6);
  if ((ulong)bVar2 != 0) {
    uVar9 = 0;
    do {
      plVar8 = *(long **)(param_1 + uVar9 * 8);
      uVar4 = (**(code **)(*plVar8 + 0x98))(plVar8);
      uVar5 = FUN_0128ab58(*(undefined8 *)(param_2 + 0x290),uVar3,uVar4);
      if ((plVar8 != (long *)0x0) && ((uVar5 & 1) == 0)) {
        uVar5 = (ulong)*(byte *)((long)param_4 + 0xa6);
        if (uVar5 < 0xb) {
          puVar6 = param_4;
          uVar7 = uVar5;
          if (*(byte *)((long)param_4 + 0xa6) != 0) {
            do {
              if ((long *)*puVar6 == plVar8) goto LAB_01632798;
              uVar7 = uVar7 - 1;
              puVar6 = puVar6 + 1;
            } while (uVar7 != 0);
          }
          param_4[uVar5] = plVar8;
          *(undefined1 *)((long)param_4 + (ulong)*(byte *)((long)param_4 + 0xa6) + 0x84) = 0;
          *(undefined2 *)((long)param_4 + (ulong)*(byte *)((long)param_4 + 0xa6) * 2 + 0x58) = 0;
          *(undefined2 *)((long)param_4 + (ulong)*(byte *)((long)param_4 + 0xa6) * 2 + 0x6e) = 0;
          bVar1 = *(char *)((long)param_4 + 0xa6) + 1;
          *(byte *)((long)param_4 + 0xa6) = bVar1;
          if (*(byte *)((long)param_4 + 0xa7) < bVar1) {
            *(byte *)((long)param_4 + 0xa7) = bVar1;
          }
        }
      }
LAB_01632798:
      uVar9 = uVar9 + 1;
    } while (uVar9 != bVar2);
  }
  return *(undefined1 *)((long)param_4 + 0xa6);
}


