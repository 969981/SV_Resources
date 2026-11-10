/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01013d6c; name: FUN_01013d6c
 */


bool FUN_01013d6c(long param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong *puVar8;
  
  param_1 = param_1 + (param_2 & 0xffffffff) * 0xd8;
  puVar8 = *(ulong **)(param_1 + 0xa8);
  puVar1 = (ulong *)(*(long *)(param_1 + 0x70) + (param_2 >> 0x1c & 0xffffffff0));
  uVar7 = *puVar8;
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = uVar4 - uVar3;
  uVar2 = (uint)(param_4 < uVar5) << 4 |
          (uint)(param_3 == 0) | (uint)(uVar4 < uVar3 || uVar5 == 0) << 1 |
          (uint)(uVar7 <= uVar3) << 2 | (uint)(uVar7 <= uVar4) << 3;
  if (uVar2 != 0) {
    DAT_0485f330 = (undefined4)param_2;
    DAT_0485f334 = (undefined4)(param_2 >> 0x20);
    DAT_0485f338 = param_3;
    DAT_0485f340 = param_4;
    DAT_0485f348 = uVar3;
    DAT_0485f350 = uVar4;
    DAT_0485f358 = uVar7;
    DAT_0485f360 = uVar5;
    DAT_0485f368 = uVar2;
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("errorCode == 0","ReadArchiveData",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/fs/archive_storage_system.cpp"
               ,0x90,"[fs-arc-storage] Detected error(%d)! Please check dyingReport for detail.");
  }
  iVar6 = nn::fs::ReadFile(puVar8[2],uVar3,param_3,uVar5);
  return iVar6 == 0;
}


