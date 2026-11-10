/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e5624; name: FUN_007e5624
 */


void FUN_007e5624(undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  uVar1 = (param_3 & 0xffff) * 0x98 + 0x14;
  uVar5 = (ulong)uVar1;
  *(uint *)(param_2 + 0x20) = uVar1;
  uVar2 = FUN_0078a12c();
  lVar3 = FUN_007bf9f0(uVar5,uVar2);
  if (lVar3 != 0) {
    lVar4 = lVar3 + 3;
    do {
      *(undefined4 *)(lVar4 + -3) = 0;
      lVar4 = lVar4 + 4;
      uVar5 = uVar5 - 4;
    } while (uVar5 != 0);
  }
  *(long *)(param_2 + 0x18) = lVar3;
  *(undefined1 *)(param_2 + 0x10) = 0;
  FUN_007935cc(param_2 + 8);
  memset(*(void **)(param_2 + 0x18),0,(ulong)*(uint *)(param_2 + 0x20));
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x5e8) = 0xffff;
  *(undefined2 *)(param_2 + 0x5ec) = 0;
  memset((void *)(param_2 + 0x5f0),0,4);
  *(undefined1 *)(param_2 + 0x5f4) = 0;
  local_38[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_38);
  return;
}


