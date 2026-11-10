/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a3e90c; name: FUN_02a3e90c
 */


undefined1 FUN_02a3e90c(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  long local_78;
  float local_6c;
  
  if (*(char *)(param_1 + 9) != '\0') {
    if (((*PTR_DAT_047d8840 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8840), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047db070,PTR_DAT_047d8848,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8840);
    }
    local_78 = 0;
    lVar5 = *(long *)PTR_DAT_047d8848;
    *(long *)PTR_DAT_047d8850 = lVar5;
    plVar3 = *(long **)(lVar5 + 0x2a0);
    (**(code **)(*plVar3 + 0x18))(plVar3,3,auStack_80);
    if ((local_78 == 0) || (local_6c < 0.9)) {
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x18);
      if (lVar5 == 0) {
        nn::os::GetSystemTick();
        uVar4 = nn::os::ConvertToTimeSpan();
        uVar1 = ((long)uVar4 >> 0x20) * 0xd7b634db + ((uVar4 & 0xffffffff) * 0xd7b634db >> 0x20);
        *(long *)(param_1 + 0x18) =
             ((long)(((long)uVar4 >> 0x20) * 0x431bde82 + ((long)uVar1 >> 0x20) +
                    ((uVar4 & 0xffffffff) * 0x431bde82 + (uVar1 & 0xffffffff) >> 0x20)) >> 0x12) -
             ((long)uVar4 >> 0x3f);
      }
      else {
        if (param_2 == 0) {
          nn::os::GetSystemTick();
          uVar4 = nn::os::ConvertToTimeSpan();
          uVar1 = ((long)uVar4 >> 0x20) * 0xd7b634db + ((uVar4 & 0xffffffff) * 0xd7b634db >> 0x20);
          param_2 = ((long)(((long)uVar4 >> 0x20) * 0x431bde82 + ((long)uVar1 >> 0x20) +
                           ((uVar4 & 0xffffffff) * 0x431bde82 + (uVar1 & 0xffffffff) >> 0x20)) >>
                    0x12) - ((long)uVar4 >> 0x3f);
          lVar5 = *(long *)(param_1 + 0x18);
        }
        else {
          param_2 = *(long *)(param_1 + 0x20) + param_2;
          *(long *)(param_1 + 0x20) = param_2;
          param_2 = param_2 + lVar5;
        }
        if ((*(long *)(param_1 + 0x10) + lVar5 <= param_2) &&
           (*(undefined1 *)(param_1 + 8) = 1, *(char *)(param_1 + 9) != '\0')) {
          *(undefined8 *)(param_1 + 0x18) = 0;
          FUN_0226f4a0(3);
          *(undefined1 *)(param_1 + 9) = 0;
        }
      }
    }
  }
  return *(undefined1 *)(param_1 + 8);
}


