/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031f4b48; name: FUN_031f4b48
 */


void FUN_031f4b48(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  void *__src;
  long lVar3;
  int iVar4;
  void *local_40;
  undefined8 local_38;
  
  local_40 = (void *)0x0;
  local_38 = 0x8000000000000000;
  if ((void **)(param_1 + 0x50) != &local_40) {
    iVar4 = *(int *)(param_1 + 0x58);
    lVar3 = (long)iVar4;
    __src = *(void **)(param_1 + 0x50);
    if (iVar4 < 1) {
      memcpy((void *)0x0,__src,lVar3 << 3);
    }
    else {
      FUN_031f9fcc(&local_40,lVar3);
      memcpy(local_40,__src,lVar3 << 3);
      lVar3 = 0;
      local_38 = CONCAT44(local_38._4_4_,iVar4);
      do {
        lVar1 = *(long *)((long)local_40 + lVar3 * 8);
        if (lVar1 != 0) {
          (**(code **)(lVar1 + 0x28))(param_2,*(undefined8 *)(lVar1 + 0x30));
          iVar4 = (int)local_38;
        }
        lVar1 = local_38;
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar4);
      uVar2 = (ulong)local_38._4_4_;
      local_38 = (ulong)local_38._4_4_ << 0x20;
      if ((-1 < lVar1) && (local_40 != (void *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_40,uVar2 << 3);
      }
    }
  }
  return;
}


