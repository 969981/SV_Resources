/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c7f950; name: FUN_00c7f950
 */


void FUN_00c7f950(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 local_78;
  undefined7 uStack_77;
  long lStack_70;
  undefined1 local_24 [4];
  
  lVar1 = FUN_01e5c418(param_2 + 0xf8,param_2 + 0x198);
  if (lVar1 == 0) {
LAB_00c7fa30:
    uVar3 = *(undefined8 *)(param_2 + 400);
    *(undefined4 *)(param_1 + 6) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = uVar3;
    param_1[4] = 0x7fffffffffffffff;
    param_1[5] = 0;
    return;
  }
  lVar1 = lVar1 + 0x18;
  local_78 = 0;
  lVar2 = FUN_01e5c520(lVar1,&local_78);
  if (lVar2 == 0) goto LAB_00c7fa30;
  lVar2 = (*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40) >> 3) * 0x6db6db6db6db6db7;
  local_24[0] = (undefined1)lVar2;
  if ((uint)*(byte *)(param_2 + 0x198) < ((uint)lVar2 & 0xff)) {
    FUN_01e5c63c(param_2);
    lVar1 = FUN_01e5c418(param_2 + 0xf8,param_2 + 0x198);
    if (lVar1 != 0) {
      lVar1 = lVar1 + 0x18;
      lVar2 = FUN_01e5c520(lVar1,local_24);
      if (lVar2 != 0) {
        FUN_014d57fc(&local_78,lVar2 + 0x18);
        FUN_01e5c760(CONCAT71(uStack_77,local_78),lStack_70);
        if (lStack_70 == CONCAT71(uStack_77,local_78)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        FUN_014dbcf8(param_1);
        FUN_014d4bf4(&local_78);
        return;
      }
      goto LAB_00c7fa6c;
    }
  }
  else {
LAB_00c7fa6c:
    local_78 = 0;
    lVar1 = FUN_01e5c520(lVar1,&local_78);
    if (lVar1 != 0) {
      if (*(long *)(lVar1 + 0x20) != *(long *)(lVar1 + 0x18)) {
        FUN_014dbcf8(param_1);
        return;
      }
      goto LAB_00c7faa4;
    }
  }
  FUN_01e5c630();
LAB_00c7faa4:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


