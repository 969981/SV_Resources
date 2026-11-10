/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f3838; name: FUN_004f3838
 */


void FUN_004f3838(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(param_3 + 0x58);
  if ((lVar3 == 0) ||
     ((*(int *)(lVar3 + 0x18) == 1 && (*(char *)(**(long **)(lVar3 + 0x20) + 0x41) != '\0')))) {
    uVar5 = *param_4;
    uVar2 = FUN_004fa4b0(param_1 + 8,param_3);
    *(undefined8 *)(param_2 + (uVar2 & 0xffffffff)) = uVar5;
    if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
      if (*(char *)(param_3 + 0x43) == '\0') {
        plVar4 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar4 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
      }
      else {
        plVar4 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
      }
      uVar1 = (int)((ulong)(param_3 - *plVar4) >> 3) * 0x286bca1b;
      uVar1 = *(uint *)(*(long *)(param_1 + 0x18) +
                       (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2));
      if (uVar1 != 0xffffffff) {
        param_2 = param_2 + (ulong)*(uint *)(param_1 + 0x20);
        uVar2 = (ulong)(uVar1 >> 3) & 0x1ffffffc;
        *(uint *)(param_2 + uVar2) = *(uint *)(param_2 + uVar2) | 1 << (ulong)(uVar1 & 0x1f);
        return;
      }
    }
  }
  else {
    if (*(int *)(param_2 +
                (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                             (int)((ulong)(lVar3 - *(long *)(*(long *)(lVar3 + 0x10) + 0x30)) >> 4)
                             * -0x55555554)) != *(int *)(param_3 + 0x44)) {
      FUN_004f41b4(param_1,param_2);
    }
    uVar5 = *param_4;
    uVar2 = FUN_004fa4b0(param_1 + 8,param_3);
    *(undefined8 *)(param_2 + (uVar2 & 0xffffffff)) = uVar5;
    *(undefined4 *)
     (param_2 +
     (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                  (int)((ulong)(*(long *)(param_3 + 0x58) -
                               *(long *)(*(long *)(*(long *)(param_3 + 0x58) + 0x10) + 0x30)) >> 4)
                  * -0x55555554)) = *(undefined4 *)(param_3 + 0x44);
  }
  return;
}


