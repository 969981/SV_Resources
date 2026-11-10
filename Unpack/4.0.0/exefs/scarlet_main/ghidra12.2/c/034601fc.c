/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034601fc; name: FUN_034601fc
 */


undefined8 FUN_034601fc(undefined8 *param_1,char *param_2,char *param_3)

{
  long lVar1;
  undefined *puVar2;
  size_t sVar3;
  size_t sVar4;
  void *__dest;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong __n;
  size_t __n_00;
  bool bVar8;
  
  puVar2 = PTR_DAT_047e2fd0;
  if (*(char *)(param_1 + 1) != '\0') {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,*param_1);
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_2 == (char *)0x0) {
    return 1;
  }
  sVar3 = strlen(param_2);
  if (param_3 == (char *)0x0) {
    __n = 0;
    if ((sVar3 & 0xffffffff) == 0) {
      __n_00 = 0;
      uVar7 = __n;
      goto LAB_034602d4;
    }
  }
  else {
    sVar4 = strlen(param_3);
    __n_00 = sVar3 & 0xffffffff;
    __n = sVar4 & 0xffffffff;
    uVar7 = __n;
    if (__n_00 <= (sVar4 & 0xffffffff)) {
LAB_034602d4:
      bVar8 = false;
      __n = uVar7;
      goto LAB_034602d8;
    }
    if (__n != 0) {
      uVar6 = 0;
      do {
        if (param_2[uVar6 + (__n_00 - __n)] != param_3[uVar6]) goto LAB_034602d4;
        uVar6 = uVar6 + 1;
      } while ((uVar6 & 0xffffffff) < __n);
    }
  }
  __n_00 = sVar3 & 0xffffffff;
  uVar7 = 0;
  bVar8 = true;
LAB_034602d8:
  lVar1 = uVar7 + ((int)sVar3 + 1);
  __dest = (void *)(**(code **)(puVar2 + 0x10))(0,lVar1);
  if (__dest == (void *)0x0) {
    uVar5 = 0x34;
  }
  else {
    memcpy(__dest,param_2,__n_00);
    if (!bVar8) {
      memcpy((void *)((long)__dest + __n_00),param_3,__n);
    }
    uVar5 = 1;
    *(undefined1 *)((long)__dest + lVar1 + -1) = 0;
    *param_1 = __dest;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return uVar5;
}


