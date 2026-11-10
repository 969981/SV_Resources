/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297b4b0; name: FUN_0297b4b0
 */


void FUN_0297b4b0(long param_1,undefined4 param_2)

{
  byte bVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined4 local_14;
  
  local_14 = param_2;
  lVar2 = FUN_0297b530(param_1 + 0x2f0,&local_14);
  if (lVar2 != 0) {
    puVar3 = (undefined1 *)FUN_01689bc0(param_1 + 0x2f0,&local_14);
    *puVar3 = 0;
    param_2 = local_14;
  }
  uVar4 = FUN_0297b630(param_1,param_2);
  if ((uVar4 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x2ea);
    if ((ulong)bVar1 < 0x1e) {
      *(byte *)(param_1 + 0x2ea) = bVar1 + 1;
      *(undefined4 *)(param_1 + (ulong)bVar1 * 4 + 0x268) = param_2;
    }
  }
  return;
}


