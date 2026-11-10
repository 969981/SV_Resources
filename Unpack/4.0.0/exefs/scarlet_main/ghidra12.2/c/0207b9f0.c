/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0207b9f0; name: FUN_0207b9f0
 */


void FUN_0207b9f0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  
  lVar1 = FUN_0207b914(param_2,*param_4);
  if ((((*(long *)(lVar1 + 0x178) == 0) || (*(short *)(*(long *)(lVar1 + 0x178) + 0x1a) == 0)) &&
      (uVar2 = FUN_01fb7a50(lVar1 + 0x160), (uVar2 & 1) == 0)) ||
     (lVar1 = *(long *)(lVar1 + 0x170), lVar1 == 0)) {
    puVar3 = (undefined1 *)FUN_00f6866c();
  }
  else {
    *(undefined8 *)(lVar1 + 0x130) = 0;
    *(undefined8 *)(lVar1 + 0x138) = 0;
    puVar3 = (undefined1 *)FUN_013e253c();
  }
  *param_1 = *puVar3;
  return;
}


