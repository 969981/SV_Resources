/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d5ea74; name: FUN_01d5ea74
 */


void FUN_01d5ea74(long *param_1,ulong *param_2)

{
  int *piVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  ushort local_68;
  ushort local_66;
  ushort local_64;
  ushort local_62;
  ushort local_60;
  ushort local_5e;
  undefined2 local_5c;
  byte local_5a;
  undefined1 local_59;
  ushort local_58;
  ushort local_56;
  ushort local_54;
  ushort local_52;
  ushort local_50;
  ushort local_4e;
  undefined8 local_4c;
  undefined8 local_44;
  undefined1 local_3c;
  undefined4 local_3a;
  ushort local_36;
  undefined2 local_34;
  undefined1 auStack_18 [8];
  
  if (((DAT_048383f8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_048383f8), iVar7 != 0)) {
    FUN_00100190(&LAB_00aa519c,&DAT_048383e8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048383f8);
  }
  DAT_04838400 = DAT_048383e8;
  local_80 = 0xffffffffffffffff;
  local_70 = 0xffffffffffffffff;
  local_5c = 0xffff;
  local_59 = 1;
  local_3a = 0x1000100;
  local_90 = 0;
  local_88 = 0;
  local_3c = 0;
  local_34 = 0;
  local_4c = 0;
  local_44 = 0xffff00000000;
  uVar10 = *param_2;
  local_68 = (ushort)uVar10 & 0x7ff;
  uVar9 = param_2[1];
  local_64 = (ushort)((uint)uVar10 >> 0xb) & 0xfff;
  local_36 = (ushort)(uVar10 >> 0x10) >> 7 & 0xff;
  local_60 = (ushort)(uVar10 >> 0x1f) & 1;
  local_78 = 0x1ffffffff;
  if ((uVar10 & 0x100000000) != 0) {
    local_78 = 0x2ffffffff;
  }
  local_66 = (ushort)(uVar10 >> 0x21) & 0x1f;
  local_62 = (ushort)(uVar10 >> 0x26) & 0x7f;
  local_5e = (ushort)(uVar10 >> 0x35) & 0x1f;
  local_58 = (ushort)(uVar9 >> 8) & 0x1f;
  local_56 = (ushort)((uint)uVar9 >> 0xd) & 0x1f;
  uVar2 = (ushort)(uVar9 >> 0x10);
  local_54 = uVar2 >> 2 & 0x1f;
  local_4e = uVar2 >> 7 & 0x1f;
  uVar2 = *(ushort *)((long)param_2 + 0xc);
  local_52 = uVar2 & 0x1f;
  local_50 = uVar2 >> 5 & 0x1f;
  local_5a = (byte)(uVar2 >> 10) & 3;
  lVar8 = FUN_00eebe4c(auStack_18,*(undefined8 *)(DAT_048383e8 + 8),&local_90);
  lVar11 = 0;
  *param_1 = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar11 = *param_1;
  }
  uVar9 = *param_2;
  uVar5 = (uint)(uVar9 >> 0x20);
  if (((uVar9 & 0x1fe00000000000) != 0) &&
     ((uVar5 >> 0xd & 0xff) <= *(uint *)(*(long *)PTR_DAT_047d90c8 + 0x3d4))) {
    FUN_01e2ab50(*(undefined8 *)(lVar11 + 0x70),uVar9 >> 0x2d & 0xff);
    uVar5 = (uint)(*param_2 >> 0x20);
  }
  FUN_00f8921c(*(undefined8 *)(lVar11 + 0x70),uVar5 >> 0x1a & 0x1f);
  sVar6 = FUN_00cf44f4(*(undefined8 *)(lVar11 + 0x70));
  if (sVar6 == 0x365) {
    FUN_01e2afa8(lVar11,(byte)param_2[1] & 0xf);
  }
  return;
}


