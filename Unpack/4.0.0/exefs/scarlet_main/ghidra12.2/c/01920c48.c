/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01920c48; name: FUN_01920c48
 */


void FUN_01920c48(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  
  lVar1 = FUN_01920cb8(param_2,*param_4);
  if ((((*(long *)(lVar1 + 0x88) == 0) || (*(short *)(*(long *)(lVar1 + 0x88) + 0x1a) == 0)) &&
      (uVar3 = FUN_013f7d04(lVar1 + 0x70), (uVar3 & 1) == 0)) || (*(long *)(lVar1 + 0x80) == 0)) {
    puVar2 = (undefined1 *)FUN_00f6866c();
  }
  else {
    *(undefined1 *)(*(long *)(lVar1 + 0x80) + 0x253) = 1;
    puVar2 = (undefined1 *)FUN_015c0588();
  }
  *param_1 = *puVar2;
  return;
}


