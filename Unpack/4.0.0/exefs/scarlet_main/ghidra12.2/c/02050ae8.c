/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02050ae8; name: FUN_02050ae8
 */


void FUN_02050ae8(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  
  lVar1 = FUN_02050b84(param_2,*param_4);
  if ((((*(long *)(lVar1 + 0xd8) == 0) || (*(short *)(*(long *)(lVar1 + 0xd8) + 0x1a) == 0)) &&
      (uVar3 = FUN_01473a8c(lVar1 + 0xc0), (uVar3 & 1) == 0)) ||
     (lVar1 = *(long *)(lVar1 + 0xd0), lVar1 == 0)) {
    puVar2 = (undefined1 *)FUN_00f6866c();
  }
  else {
    FUN_01dfaf44(lVar1,*(undefined4 *)(*param_4 + (ulong)*(uint *)(param_2 + 0xe8)),
                 *(undefined4 *)(*param_4 + (ulong)*(uint *)(param_2 + 0xec)));
    FUN_0204dd04(lVar1,0);
    puVar2 = (undefined1 *)FUN_015c0588();
  }
  *param_1 = *puVar2;
  return;
}


