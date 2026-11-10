/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021a9bfc; name: FUN_021a9bfc
 */


undefined8 FUN_021a9bfc(long param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("args.group","operator()",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/scene/scene_manager.cpp"
               ,0x3a1);
  }
  lVar5 = FUN_021a9764(*(long *)(param_1 + 8) + 0x28);
  if (lVar5 == 0) goto LAB_021a9c98;
  iVar4 = *param_2;
  uVar6 = (ulong)*(ushort *)((long)param_2 + (4 - (long)iVar4));
  if (uVar6 != 0) {
    cVar3 = *(char *)((long)param_2 + uVar6);
    if (cVar3 == '\x02') {
      puVar1 = (undefined4 *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (6 - (long)iVar4)))
      ;
      puVar2 = (undefined4 *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (8 - (long)iVar4)))
      ;
      FUN_021a9ee8(*puVar1,puVar1[1],*puVar2,puVar2[1]);
      goto LAB_021a9c98;
    }
    if (cVar3 == '\x01') {
      FUN_021a9dd8(*(undefined4 *)
                    ((long)param_2 + (ulong)*(ushort *)((long)param_2 + (6 - (long)iVar4))),
                   *(undefined4 *)
                    ((long)param_2 + (ulong)*(ushort *)((long)param_2 + (8 - (long)iVar4))));
      goto LAB_021a9c98;
    }
    if (cVar3 != '\0') goto LAB_021a9c98;
  }
  FUN_021a9cc8(*(undefined4 *)
                ((long)param_2 + (ulong)*(ushort *)((long)param_2 + (6 - (long)iVar4))),
               *(undefined4 *)
                ((long)param_2 + (ulong)*(ushort *)((long)param_2 + (8 - (long)iVar4))));
LAB_021a9c98:
  return *(undefined8 *)(param_1 + 8);
}


