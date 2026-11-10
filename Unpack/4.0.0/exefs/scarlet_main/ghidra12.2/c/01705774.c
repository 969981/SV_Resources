/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01705774; name: FUN_01705774
 */


void FUN_01705774(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  *param_2 = 0;
  if (*(char *)(param_3 + 1) != '\x04') {
    lVar6 = *(long *)(param_1 + 8);
    uVar8 = *(ulong *)(*(long *)(lVar6 + 0x38) + 0x498);
    if (((uint)uVar8 >> 10 & 1) != 0) {
      uVar8 = FUN_01242e68(lVar6,*(undefined8 *)(param_1 + 0x10),*param_3);
      if ((uVar8 & 1) == 0) {
        return;
      }
      lVar6 = *(long *)(param_1 + 8);
      uVar8 = *(ulong *)(*(long *)(lVar6 + 0x38) + 0x498);
    }
    if (((uVar8 >> 0x21 & 1) == 0) ||
       (uVar8 = FUN_01242e68(lVar6,*(undefined8 *)(param_1 + 0x10),*param_3), (uVar8 & 1) != 0)) {
      bVar2 = *(byte *)((long)param_3 + 9);
      uVar4 = (**(code **)(*(long *)*param_3 + 0x690))
                        ((long *)*param_3,*(undefined1 *)(param_3 + 1));
      uVar1 = (uint)bVar2;
      if ((uVar4 & 0xffff) <= (uint)*(byte *)((long)param_3 + 9)) {
        uVar1 = uVar4;
      }
      if ((uVar1 & 0xff) != 0) {
        uVar3 = *(undefined1 *)(param_3 + 1);
        lVar6 = *(long *)(param_1 + 0x20);
        uVar5 = (**(code **)(*(long *)*param_3 + 0x98))();
        plVar7 = (long *)FUN_01021c94(*(undefined8 *)
                                       (*(long *)(*(long *)(lVar6 + 0x20) + 0x10) + 0x30),uVar5);
        (**(code **)(*plVar7 + 0x6d0))(plVar7,uVar3,uVar1);
        FUN_0129aff0(*(undefined8 *)(lVar6 + 0x18),5,uVar5,uVar3,uVar1 & 0xff);
        *param_2 = 1;
      }
    }
  }
  return;
}


