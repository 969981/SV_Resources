/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02170520; name: FUN_02170520
 */


void FUN_02170520(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  ulong uVar8;
  
  if (param_2 - (long)param_1 != 0) {
    uVar3 = (param_2 - (long)param_1 >> 4) * 0x34f72c234f72c235;
    piVar2 = (int *)*param_3;
    do {
      uVar4 = uVar3 >> 1;
      piVar6 = (int *)param_1[uVar4 * 0x3a];
      if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 9) ||
         (uVar8 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[4], uVar8 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)((long)piVar6 + uVar8);
      }
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 9) {
        uVar7 = 0;
      }
      else {
        uVar8 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4];
        uVar7 = 0;
        if (uVar8 != 0) {
          uVar7 = *(uint *)((long)piVar2 + uVar8);
        }
      }
      puVar1 = param_1 + uVar4 * 0x3a + 0x3a;
      uVar3 = uVar3 + ~uVar4;
      if (uVar7 <= uVar5) {
        puVar1 = param_1;
        uVar3 = uVar4;
      }
      param_1 = puVar1;
    } while (uVar3 != 0);
  }
  return;
}


