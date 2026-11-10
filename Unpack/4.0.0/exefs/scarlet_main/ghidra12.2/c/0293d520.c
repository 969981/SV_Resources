/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293d520; name: FUN_0293d520
 */


undefined8 FUN_0293d520(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (*(char *)((long)param_1 + 0x1a) == '\x05') {
    uVar2 = FUN_010803c8(param_1[2]);
    uVar1 = *(undefined4 *)(param_1 + 4);
    uVar3 = FUN_014813ec(param_1[1]);
    uVar4 = FUN_0128ab58(uVar3,uVar2,uVar1);
    if ((uVar4 & 1) == 0) {
      uVar3 = FUN_019d69c4(*param_1,*(undefined2 *)((long)param_1 + 0x1c));
      return uVar3;
    }
  }
  return 0;
}


