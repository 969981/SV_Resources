/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f1e834; name: FUN_02f1e834
 */


void FUN_02f1e834(long param_1,ulong param_2,int *param_3)

{
  long *plVar1;
  ulong *puVar2;
  int *__src;
  long *plVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined1 auStack_b0 [112];
  
  __src = (int *)(*(long *)(param_1 + 0x40) + (param_2 & 0xffff) * 0x70);
  if (((((((*__src != *param_3) || (__src[1] != param_3[1])) || (__src[2] != param_3[2])) ||
        ((__src[3] != param_3[3] || (__src[4] != param_3[4])))) || (__src[5] != param_3[5])) ||
      (((((__src[6] != param_3[6] || (__src[7] != param_3[7])) ||
         ((__src[8] != param_3[8] ||
          (((__src[9] != param_3[9] || (__src[10] != param_3[10])) || (__src[0xb] != param_3[0xb])))
          ))) || ((__src[0xc] != param_3[0xc] || (__src[0xd] != param_3[0xd])))) ||
       (__src[0xe] != param_3[0xe])))) ||
     ((((__src[0xf] != param_3[0xf] || (__src[0x10] != param_3[0x10])) ||
       ((__src[0x11] != param_3[0x11] ||
        (((__src[0x12] != param_3[0x12] || (__src[0x13] != param_3[0x13])) ||
         (__src[0x14] != param_3[0x14])))))) ||
      (((__src[0x15] != param_3[0x15] || (__src[0x16] != param_3[0x16])) ||
       ((__src[0x17] != param_3[0x17] ||
        (((__src[0x18] != param_3[0x18] || (__src[0x19] != param_3[0x19])) ||
         ((__src[0x1a] != param_3[0x1a] || (__src[0x1b] != param_3[0x1b])))))))))))) {
    memcpy(auStack_b0,__src,0x70);
    memcpy(__src,param_3,0x70);
    puVar2 = (ulong *)(param_1 + 0x28);
    plVar1 = (long *)(*puVar2 & 0xfffffffffffffffc);
    if (plVar1 != (long *)0x0) {
      *puVar2 = (ulong)plVar1 | 1;
      puVar4 = puVar2;
      do {
        puVar5 = (ulong *)(plVar1 + 1);
        plVar3 = (long *)(*puVar5 & 0xfffffffffffffffc);
        if ((*puVar5 & 3) == 0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,param_1,param_2 & 0xffff,auStack_b0);
        }
        else {
          (**(code **)(*plVar1 + 8))();
          *puVar4 = *puVar4 & 3 | (ulong)plVar3;
          puVar5 = puVar4;
        }
        plVar1 = plVar3;
        puVar4 = puVar5;
      } while (plVar3 != (long *)0x0);
      *puVar2 = *puVar2 & 0xfffffffffffffffc;
    }
  }
  return;
}


