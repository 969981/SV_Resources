/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f36cc; name: FUN_004f36cc
 */


void FUN_004f36cc(long param_1,long param_2,long param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = *(long *)(param_3 + 0x58);
  if ((lVar4 == 0) ||
     ((*(int *)(lVar4 + 0x18) == 1 && (*(char *)(**(long **)(lVar4 + 0x20) + 0x41) != '\0')))) {
    uVar1 = *param_4;
    uVar3 = FUN_004fa4b0(param_1 + 8,param_3);
    *(undefined4 *)(param_2 + (uVar3 & 0xffffffff)) = uVar1;
    if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
      if (*(char *)(param_3 + 0x43) == '\0') {
        plVar5 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar5 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
      }
      else {
        plVar5 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
      }
      uVar2 = (int)((ulong)(param_3 - *plVar5) >> 3) * 0x286bca1b;
      uVar2 = *(uint *)(*(long *)(param_1 + 0x18) +
                       (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2));
      if (uVar2 != 0xffffffff) {
        param_2 = param_2 + (ulong)*(uint *)(param_1 + 0x20);
        uVar3 = (ulong)(uVar2 >> 3) & 0x1ffffffc;
        *(uint *)(param_2 + uVar3) = *(uint *)(param_2 + uVar3) | 1 << (ulong)(uVar2 & 0x1f);
        return;
      }
    }
  }
  else {
    if (*(int *)(param_2 +
                (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                             (int)((ulong)(lVar4 - *(long *)(*(long *)(lVar4 + 0x10) + 0x30)) >> 4)
                             * -0x55555554)) != *(int *)(param_3 + 0x44)) {
      FUN_004f41b4(param_1,param_2);
    }
    uVar1 = *param_4;
    uVar3 = FUN_004fa4b0(param_1 + 8,param_3);
    *(undefined4 *)(param_2 + (uVar3 & 0xffffffff)) = uVar1;
    *(undefined4 *)
     (param_2 +
     (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                  (int)((ulong)(*(long *)(param_3 + 0x58) -
                               *(long *)(*(long *)(*(long *)(param_3 + 0x58) + 0x10) + 0x30)) >> 4)
                  * -0x55555554)) = *(undefined4 *)(param_3 + 0x44);
  }
  return;
}


