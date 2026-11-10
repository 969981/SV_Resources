/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0081d49c; name: FUN_0081d49c
 */


undefined8 FUN_0081d49c(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulong __n;
  
  sVar3 = strlen(PTR_DAT_047d1968);
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    __n = (ulong)(bVar1 >> 1);
    if (sVar3 == __n) {
      if (sVar3 == 0xffffffffffffffff) {
LAB_0081d7f4:
                    /* try { // try from 0081d7f4 to 0081d7fb has its CatchHandler @ 0081d838 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar5 = param_1 + 1;
joined_r0x0081d500:
      if ((sVar3 == 0) || (iVar2 = memcmp(pbVar5,PTR_DAT_047d1968,sVar3), iVar2 == 0)) {
        uVar4 = FUN_0043bf30();
        goto LAB_0081d7dc;
      }
      sVar3 = strlen(PTR_s_sha_1_047d1930);
      if ((bVar1 & 1) != 0) {
        __n = *(ulong *)(param_1 + 8);
        if (sVar3 == __n) goto LAB_0081d58c;
        goto LAB_0081d600;
      }
      __n = (ulong)(bVar1 >> 1);
      if (sVar3 == __n) goto LAB_0081d56c;
LAB_0081d530:
      sVar3 = strlen(PTR_s_sha_224_047d1978);
      if (sVar3 == __n) goto LAB_0081d544;
LAB_0081d5cc:
      sVar3 = strlen(PTR_s_sha_256_047d1980);
      if (sVar3 != __n) goto LAB_0081d654;
LAB_0081d5e0:
      pbVar5 = param_1 + 1;
joined_r0x0081d6a8:
      if ((__n == 0) || (iVar2 = memcmp(pbVar5,PTR_s_sha_256_047d1980,__n), iVar2 == 0)) {
        uVar4 = FUN_0043c2a0();
        goto LAB_0081d7dc;
      }
      sVar3 = strlen(PTR_s_sha_384_047d1988);
      if ((bVar1 & 1) == 0) {
        __n = (ulong)(bVar1 >> 1);
        if (sVar3 == __n) goto LAB_0081d668;
        goto LAB_0081d6dc;
      }
      __n = *(ulong *)(param_1 + 8);
      if (sVar3 == __n) goto LAB_0081d71c;
      goto LAB_0081d77c;
    }
    sVar3 = strlen(PTR_s_sha_1_047d1930);
    if (sVar3 != __n) goto LAB_0081d530;
LAB_0081d56c:
    pbVar5 = param_1 + 1;
joined_r0x0081d598:
    if ((__n == 0) || (iVar2 = memcmp(pbVar5,PTR_s_sha_1_047d1930,__n), iVar2 == 0)) {
      uVar4 = FUN_0043c280();
      goto LAB_0081d7dc;
    }
    sVar3 = strlen(PTR_s_sha_224_047d1978);
    if ((bVar1 & 1) != 0) {
      __n = *(ulong *)(param_1 + 8);
      if (sVar3 == __n) goto LAB_0081d614;
      goto LAB_0081d688;
    }
    __n = (ulong)(bVar1 >> 1);
    if (sVar3 != __n) goto LAB_0081d5cc;
LAB_0081d544:
    pbVar5 = param_1 + 1;
joined_r0x0081d620:
    if ((__n == 0) || (iVar2 = memcmp(pbVar5,PTR_s_sha_224_047d1978,__n), iVar2 == 0)) {
      uVar4 = FUN_0043c290();
      goto LAB_0081d7dc;
    }
    sVar3 = strlen(PTR_s_sha_256_047d1980);
    if ((bVar1 & 1) != 0) {
      __n = *(ulong *)(param_1 + 8);
      if (sVar3 == __n) {
LAB_0081d69c:
        if (__n == 0xffffffffffffffff) {
                    /* try { // try from 0081d80c to 0081d813 has its CatchHandler @ 0081d82c */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_out_of_range();
        }
        pbVar5 = *(byte **)(param_1 + 0x10);
        goto joined_r0x0081d6a8;
      }
      goto LAB_0081d708;
    }
    __n = (ulong)(bVar1 >> 1);
    if (sVar3 == __n) goto LAB_0081d5e0;
LAB_0081d654:
    sVar3 = strlen(PTR_s_sha_384_047d1988);
    if (sVar3 == __n) {
LAB_0081d668:
      pbVar5 = param_1 + 1;
      goto joined_r0x0081d728;
    }
LAB_0081d6dc:
    sVar3 = strlen(PTR_s_sha_512_047d1990);
    if (sVar3 != __n) {
      return 0;
    }
LAB_0081d75c:
    param_1 = param_1 + 1;
  }
  else {
    __n = *(ulong *)(param_1 + 8);
    if (sVar3 == __n) {
      if (sVar3 == 0xffffffffffffffff) goto LAB_0081d7f4;
      pbVar5 = *(byte **)(param_1 + 0x10);
      goto joined_r0x0081d500;
    }
    sVar3 = strlen(PTR_s_sha_1_047d1930);
    if (sVar3 == __n) {
LAB_0081d58c:
      if (__n == 0xffffffffffffffff) {
                    /* try { // try from 0081d7fc to 0081d803 has its CatchHandler @ 0081d834 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar5 = *(byte **)(param_1 + 0x10);
      goto joined_r0x0081d598;
    }
LAB_0081d600:
    sVar3 = strlen(PTR_s_sha_224_047d1978);
    if (sVar3 == __n) {
LAB_0081d614:
      if (__n == 0xffffffffffffffff) {
                    /* try { // try from 0081d804 to 0081d80b has its CatchHandler @ 0081d830 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar5 = *(byte **)(param_1 + 0x10);
      goto joined_r0x0081d620;
    }
LAB_0081d688:
    sVar3 = strlen(PTR_s_sha_256_047d1980);
    if (sVar3 == __n) goto LAB_0081d69c;
LAB_0081d708:
    sVar3 = strlen(PTR_s_sha_384_047d1988);
    if (sVar3 == __n) {
LAB_0081d71c:
      if (__n == 0xffffffffffffffff) {
                    /* try { // try from 0081d814 to 0081d81b has its CatchHandler @ 0081d828 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar5 = *(byte **)(param_1 + 0x10);
joined_r0x0081d728:
      if ((__n == 0) || (iVar2 = memcmp(pbVar5,PTR_s_sha_384_047d1988,__n), iVar2 == 0)) {
        uVar4 = FUN_0043c2d0();
        goto LAB_0081d7dc;
      }
      sVar3 = strlen(PTR_s_sha_512_047d1990);
      if ((bVar1 & 1) == 0) {
        __n = (ulong)(bVar1 >> 1);
        if (sVar3 != __n) {
          return 0;
        }
        goto LAB_0081d75c;
      }
      __n = *(ulong *)(param_1 + 8);
      if (sVar3 != __n) {
        return 0;
      }
    }
    else {
LAB_0081d77c:
      sVar3 = strlen(PTR_s_sha_512_047d1990);
      if (sVar3 != __n) {
        return 0;
      }
    }
    if (__n == 0xffffffffffffffff) {
                    /* try { // try from 0081d81c to 0081d823 has its CatchHandler @ 0081d824 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    param_1 = *(byte **)(param_1 + 0x10);
  }
  if ((__n != 0) && (iVar2 = memcmp(param_1,PTR_s_sha_512_047d1990,__n), iVar2 != 0)) {
    return 0;
  }
  uVar4 = FUN_0043c2e0();
LAB_0081d7dc:
  *param_2 = uVar4;
  return 1;
}


