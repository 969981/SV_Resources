/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021a9678; name: FUN_021a9678
 */


undefined8 FUN_021a9678(long param_1,int *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  ushort *puVar4;
  undefined8 local_30;
  ulong uStack_28;
  
  if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("args.group","operator()",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/scene/scene_manager.cpp"
               ,0x38e);
  }
  lVar3 = FUN_021a9764(*(long *)(param_1 + 8) + 0x28);
  if (lVar3 == 0) goto LAB_021a9714;
  puVar4 = (ushort *)((long)param_2 - (long)*param_2);
  local_30 = 0;
  uStack_28 = 0;
  if ((6 < *puVar4) && ((ulong)puVar4[3] != 0)) {
    puVar1 = (undefined8 *)((long)param_2 + (ulong)puVar4[3]);
    local_30 = *puVar1;
    uStack_28 = (ulong)*(uint *)(puVar1 + 1);
  }
  if ((ulong)puVar4[2] != 0) {
    cVar2 = *(char *)((long)param_2 + (ulong)puVar4[2]);
    if (cVar2 == '\x01') {
      FUN_021a996c(*(undefined4 *)((long)param_2 + (ulong)puVar4[4]),
                   *(undefined4 *)((long)param_2 + (ulong)puVar4[5]),lVar3,&local_30);
      goto LAB_021a9714;
    }
    if (cVar2 != '\0') goto LAB_021a9714;
  }
  FUN_021a97b4(*(undefined4 *)((long)param_2 + (ulong)puVar4[4]),
               *(undefined4 *)((long)param_2 + (ulong)puVar4[5]),lVar3,&local_30);
LAB_021a9714:
  return *(undefined8 *)(param_1 + 8);
}


