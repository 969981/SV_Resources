/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015efc98; name: FUN_015efc98
 */


void FUN_015efc98(long param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long alStack_90 [12];
  
  lVar4 = *(long *)(param_1 + 0x178);
  alStack_90[0] = param_1;
  pcVar2 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar4 + 0x70) + 0x110),lVar4 + 0x30);
  if (*pcVar2 == '\0' || *(long *)(pcVar2 + 8) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    if (*(long *)(*(long *)(pcVar2 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_buffer","Map",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                 ,0x31);
    }
    puVar3 = (undefined8 *)(**(code **)PTR_DAT_047d8da8)();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1a0);
  puVar3[2] = 0xbf800000bf800000;
  *(undefined4 *)(puVar3 + 3) = uVar1;
  *(undefined8 *)((long)puVar3 + 0x1c) = 0x3f80000000000000;
  auVar5 = *(undefined1 (*) [16])(param_1 + 400);
  auVar6 = NEON_ext(auVar5,auVar5,8,1);
  *puVar3 = auVar5._0_8_;
  puVar3[1] = auVar6._0_8_;
  uVar1 = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined8 *)((long)puVar3 + 0x34) = 0xbf8000003f800000;
  *(undefined4 *)((long)puVar3 + 0x3c) = uVar1;
  puVar3[8] = 0x3f8000003f800000;
  auVar5 = *(undefined1 (*) [16])(param_1 + 400);
  *(long *)((long)puVar3 + 0x24) = auVar5._0_8_;
  auVar5 = NEON_ext(auVar5,auVar5,8,1);
  *(long *)((long)puVar3 + 0x2c) = auVar5._0_8_;
  uVar1 = *(undefined4 *)(param_1 + 0x1a0);
  puVar3[0xb] = 0x3f800000bf800000;
  *(undefined4 *)(puVar3 + 0xc) = uVar1;
  *(undefined8 *)((long)puVar3 + 100) = 0;
  auVar5 = *(undefined1 (*) [16])(param_1 + 400);
  auVar6 = NEON_ext(auVar5,auVar5,8,1);
  puVar3[9] = auVar5._0_8_;
  puVar3[10] = auVar6._0_8_;
  uVar1 = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined8 *)((long)puVar3 + 0x7c) = 0x3f8000003f800000;
  puVar3[0x11] = 0x3f800000;
  *(undefined4 *)((long)puVar3 + 0x84) = uVar1;
  auVar5 = *(undefined1 (*) [16])(param_1 + 400);
  *(long *)((long)puVar3 + 0x6c) = auVar5._0_8_;
  auVar5 = NEON_ext(auVar5,auVar5,8,1);
  *(long *)((long)puVar3 + 0x74) = auVar5._0_8_;
  FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar4 + 0x70) + 0x110),lVar4 + 0x30);
  FUN_02b7f324(alStack_90);
  lVar4 = *(long *)(param_1 + 0x130);
  FUN_00c75684(*(undefined8 *)(lVar4 + 200),0,param_1 + 0x178);
  FUN_00c752dc(lVar4,param_1 + 0x140,1);
  return;
}


