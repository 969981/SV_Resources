/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033b5790; name: FUN_033b5790
 */


void FUN_033b5790(long param_1,char *param_2,char *param_3)

{
  undefined *puVar1;
  size_t sVar2;
  void *pvVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  
  iVar4 = *(int *)(param_1 + 0x30);
  lVar5 = (long)iVar4;
  if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) <= iVar4) {
    FUN_033b7c58(param_1 + 0x28,lVar5 + 1);
    iVar4 = *(int *)(param_1 + 0x30);
  }
  lVar9 = *(long *)(param_1 + 0x28);
  puVar8 = (ulong *)(lVar9 + (long)iVar4 * 0x10);
  *(int *)(param_1 + 0x30) = (int)(lVar5 + 1);
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar1 = PTR_PTR_047d1a50;
  if (param_2 != (char *)0x0) {
    sVar2 = strlen(param_2);
    sVar2 = (size_t)((int)sVar2 + 1);
    pvVar3 = (void *)(**(code **)(*(long *)puVar1 + 0x18))(puVar1,sVar2);
    memcpy(pvVar3,param_2,sVar2);
    *puVar8 = (ulong)pvVar3 | 1;
  }
  puVar8 = (ulong *)(lVar9 + (long)iVar4 * 0x10 + 8);
  uVar7 = *puVar8;
  if ((char *)(uVar7 & 0xfffffffffffffffe) != param_3) {
    if (param_3 == (char *)0x0) {
      uVar6 = 0;
    }
    else {
      sVar2 = strlen(param_3);
      sVar2 = (size_t)((int)sVar2 + 1);
      pvVar3 = (void *)(**(code **)(*(long *)puVar1 + 0x18))(puVar1,sVar2);
      memcpy(pvVar3,param_3,sVar2);
      uVar6 = (ulong)pvVar3 | 1;
    }
    *puVar8 = uVar6;
    if ((uVar7 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x033b58dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar7 - 1,0);
      return;
    }
  }
  return;
}


