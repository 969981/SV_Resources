/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ae9914; name: FUN_02ae9914
 */


void FUN_02ae9914(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *plVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  byte *__s;
  size_t sVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  
  if (((DAT_04840858 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04840858), iVar5 != 0)) {
    FUN_00100190(&LAB_02af32dc,&DAT_04840848,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840858);
  }
  DAT_04840840 = DAT_04840848;
  __s = (byte *)FUN_0129309c(DAT_04840848,param_2,param_3 + -1);
  if (__s == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar4 = PTR_DAT_047d3e30;
    uVar1 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
    *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
    param_1[1] = uVar1;
    plVar2 = *(long **)(puVar4 + 0x18);
    param_1[2] = *(undefined8 *)(puVar4 + 0x10);
    param_1[3] = plVar2;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02ae99ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  else {
    puVar8 = &DAT_cbf29ce484222645;
    sVar6 = strlen((char *)__s);
    bVar3 = *__s;
    pbVar7 = __s;
    while (bVar3 != 0) {
      pbVar7 = pbVar7 + 1;
      puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar7;
    }
    *param_1 = puVar8;
    param_1[1] = __s;
    param_1[2] = sVar6;
    param_1[3] = 0;
  }
  return;
}


