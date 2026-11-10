/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124e624; name: FUN_0124e624
 */


bool FUN_0124e624(long param_1,uint param_2)

{
  if (((((((*(byte *)(param_1 + 8) == param_2) || (*(byte *)(param_1 + 9) == param_2)) ||
         (*(byte *)(param_1 + 10) == param_2)) ||
        ((*(byte *)(param_1 + 0xb) == param_2 || (*(byte *)(param_1 + 0xc) == param_2)))) ||
       (*(byte *)(param_1 + 0xd) == param_2)) ||
      (((((*(byte *)(param_1 + 0xe) == param_2 || (*(byte *)(param_1 + 0xf) == param_2)) ||
         ((*(byte *)(param_1 + 0x10) == param_2 ||
          (((*(byte *)(param_1 + 0x11) == param_2 || (*(byte *)(param_1 + 0x12) == param_2)) ||
           (*(byte *)(param_1 + 0x13) == param_2)))))) ||
        ((*(byte *)(param_1 + 0x14) == param_2 || (*(byte *)(param_1 + 0x15) == param_2)))) ||
       (*(byte *)(param_1 + 0x16) == param_2)))) ||
     ((((*(byte *)(param_1 + 0x17) == param_2 || (*(byte *)(param_1 + 0x18) == param_2)) ||
       ((*(byte *)(param_1 + 0x19) == param_2 ||
        (((*(byte *)(param_1 + 0x1a) == param_2 || (*(byte *)(param_1 + 0x1b) == param_2)) ||
         (*(byte *)(param_1 + 0x1c) == param_2)))))) ||
      (((*(byte *)(param_1 + 0x1d) == param_2 || (*(byte *)(param_1 + 0x1e) == param_2)) ||
       ((*(byte *)(param_1 + 0x1f) == param_2 ||
        (((*(byte *)(param_1 + 0x20) == param_2 || (*(byte *)(param_1 + 0x21) == param_2)) ||
         ((*(byte *)(param_1 + 0x22) == param_2 ||
          ((*(byte *)(param_1 + 0x23) == param_2 || (*(byte *)(param_1 + 0x24) == param_2)))))))))))
      ))) {
    return true;
  }
  return *(byte *)(param_1 + 0x25) == param_2;
}


