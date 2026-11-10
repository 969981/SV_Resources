/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cab168; name: FUN_00cab168
 */


void FUN_00cab168(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 auStack_90 [96];
  
  if (*(long *)(param_1 + 0x1a0) != 0) {
    do {
      puVar1 = (undefined8 *)
               (*(long *)(*(long *)(param_1 + 0x160) +
                         (*(ulong *)(param_1 + 0x198) >> 2 & 0x3ffffffffffffff8)) +
               (*(ulong *)(param_1 + 0x198) & 0x1f) * 0x80);
      (*(code *)puVar1[2])(puVar1 + 4,auStack_90);
      pcVar2 = (code *)puVar1[1];
      (*(code *)*puVar1)(auStack_90);
      uVar4 = *(ulong *)(param_1 + 0x198);
      puVar1 = (undefined8 *)
               (*(long *)(*(long *)(param_1 + 0x160) + (uVar4 >> 2 & 0x3ffffffffffffff8)) +
               (uVar4 & 0x1f) * 0x80);
      pcVar5 = (code *)puVar1[1];
      if (pcVar5 != (code *)0x0) {
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        (*pcVar5)(puVar1 + 4);
        uVar4 = *(ulong *)(param_1 + 0x198);
      }
      *(ulong *)(param_1 + 0x198) = uVar4 + 1;
      *(long *)(param_1 + 0x1a0) = *(long *)(param_1 + 0x1a0) + -1;
      if (0x3f < uVar4 + 1) {
        plVar7 = *(long **)(param_1 + 0x1a8);
        uVar6 = **(undefined8 **)(param_1 + 0x160);
        uVar4 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        if (((uVar4 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar7 + 0x18))(plVar7,uVar6,0x1000,0x10);
        }
        else {
          FUN_00c48fe8(plVar7,uVar6,0x1000,0x10);
        }
        *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 8;
        *(long *)(param_1 + 0x198) = *(long *)(param_1 + 0x198) + -0x20;
      }
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(auStack_90);
      }
    } while (*(long *)(param_1 + 0x1a0) != 0);
  }
  return;
}


