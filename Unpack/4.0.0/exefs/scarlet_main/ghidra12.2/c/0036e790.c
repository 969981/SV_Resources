/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0036e790; name: FUN_0036e790
 */


void FUN_0036e790(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar5 = *param_1;
  plVar1 = *(long **)(lVar5 + 0x800);
  lVar4 = (ulong)*(uint *)(plVar1 + 1) - *(long *)(**(long **)(lVar5 + 0x808) + 0x38);
  if (lVar4 != 0) {
    do {
      uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5 + 0x830);
      if ((uVar2 & 1) == 0) {
        return;
      }
      uVar2 = (**(code **)(**(long **)(lVar5 + 0x800) + 0x20))
                        (*(long **)(lVar5 + 0x800),(undefined8 *)(lVar5 + 0x810));
      if (uVar2 != 0) {
        puVar3 = *(undefined8 **)(lVar5 + 0x800);
        *(undefined8 *)(lVar5 + 0x800) = 0;
        if (puVar3 != (undefined8 *)0x0) {
                    /* try { // try from 0036e87c to 0036e87f has its CatchHandler @ 0036e8b4 */
          (**(code **)*puVar3)();
        }
        FUN_0036a810(**(undefined8 **)(lVar5 + 0x808));
        **(undefined8 **)(lVar5 + 0x808) = 0;
        *(undefined1 *)(lVar5 + 0xaf) = 0;
        FUN_0036dd20(param_1);
        if (uVar2 < 5) {
          return;
        }
        FUN_00350fd0(uVar2);
        return;
      }
      uStack_48 = *(undefined8 *)(lVar5 + 0x818);
      local_50 = *(undefined8 *)(lVar5 + 0x810);
      uStack_38 = *(undefined8 *)(lVar5 + 0x828);
      uStack_40 = *(undefined8 *)(lVar5 + 0x820);
      FUN_003686e0(**(long **)(lVar5 + 0x808) + 0x18,&local_50);
      plVar1 = *(long **)(lVar5 + 0x800);
      lVar4 = (ulong)*(uint *)(plVar1 + 1) - *(long *)(**(long **)(lVar5 + 0x808) + 0x38);
    } while (lVar4 != 0);
  }
  *(undefined1 *)(lVar5 + 0xaf) = 0;
  *(undefined8 *)(lVar5 + 0x800) = 0;
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 0036e844 to 0036e847 has its CatchHandler @ 0036e8b8 */
    (**(code **)*plVar1)();
  }
  FUN_0036dd20(param_1);
  return;
}


