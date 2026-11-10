/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bbc000; name: FUN_01bbc000
 */


void FUN_01bbc000(undefined8 *param_1,long *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x48,8);
  if (puVar3 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *puVar3 = 0x200000001;
    puVar3[1] = 0x3d23d70a3e23d70a;
    *(undefined4 *)(puVar3 + 2) = 0x3c23d70a;
    uVar1 = FUN_01728cf0(1,6);
    *(undefined4 *)((long)puVar3 + 0x14) = uVar1;
    puVar3[3] = 0x8a442895aff72141;
    puVar3[4] = "CameraInfluence";
    puVar3[5] = 0xf;
    puVar3[6] = 0x9f708d66d453f25;
    puVar3[7] = "IgnoreCollision";
    puVar3[8] = 0xf;
    *param_1 = puVar3;
    param_1[1] = param_2;
    param_1[2] = 0x48;
    param_1[3] = 8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


