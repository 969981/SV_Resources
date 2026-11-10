/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ac948; name: FUN_004ac948
 */


undefined8 * FUN_004ac948(long param_1,ulong *param_2)

{
  void *__src;
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  undefined1 *__dest;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong *local_48;
  
  puVar3 = (undefined8 *)FUN_004a41ac(*(undefined8 *)(param_1 + 0x20),0xa0);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  puVar3[0xf] = 0;
  puVar3[0xe] = 0;
  puVar3[0x11] = 0;
  puVar3[0x10] = 0;
  puVar3[0x13] = 0;
  puVar3[0x12] = 0;
  lVar7 = *(long *)(param_1 + 0x20);
  puVar4 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (puVar4 != (ulong *)0x0) {
    if ((*param_2 & 1) == 0) {
      uVar6 = param_2[1];
      uVar8 = *param_2;
      puVar4[2] = param_2[2];
      puVar4[1] = uVar6;
      *puVar4 = uVar8;
    }
    else {
      uVar8 = param_2[1];
      __src = (void *)param_2[2];
      if (uVar8 < 0x17) {
        __dest = (undefined1 *)((long)puVar4 + 1);
        *(char *)puVar4 = (char)((int)uVar8 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar6 = uVar8 + 0x10 & 0xfffffffffffffff0;
        __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
        puVar4[1] = uVar8;
        puVar4[2] = (ulong)__dest;
        *puVar4 = uVar6 | 1;
      }
      memcpy(__dest,__src,uVar8 + 1);
    }
  }
  local_48 = puVar4;
  FUN_004a3dc0(lVar7 + 0xd0,&local_48);
  *puVar3 = puVar4;
  FUN_0052b030();
  puVar3[1] = PTR_DAT_047cba80;
  puVar3[2] = param_1;
  uVar5 = FUN_004db400();
  puVar3[0x11] = uVar5;
  puVar1 = PTR_DAT_047cd770;
  if (((*PTR_DAT_047cd768 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047cd768), iVar2 != 0))
  {
    lVar7 = FUN_0049e770(PTR_FUN_047cba38,0x160);
    if (lVar7 != 0) {
                    /* try { // try from 004acabc to 004acad3 has its CatchHandler @ 004acaf0 */
      FUN_004a1180(lVar7);
    }
    FUN_0052d820(PTR_FUN_047cd778,lVar7);
    *(long *)puVar1 = lVar7;
    __cxa_guard_release(PTR_DAT_047cd768);
  }
  puVar3[0x12] = *(undefined8 *)puVar1;
  uVar5 = FUN_004e465c();
  puVar3[0x13] = uVar5;
  *(undefined2 *)(puVar3 + 8) = 0x101;
  *(undefined4 *)((long)puVar3 + 0x3c) = 0;
  return puVar3;
}


