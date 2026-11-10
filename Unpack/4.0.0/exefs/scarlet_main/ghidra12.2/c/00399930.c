/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00399930; name: FUN_00399930
 */


bool FUN_00399930(ulong *param_1,undefined8 *param_2)

{
  void *__src;
  bool bVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  byte *__dest;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *local_58;
  long local_48;
  
  puVar3 = (ulong *)FUN_00399848();
  local_48 = 0;
  uVar4 = FUN_00399020(param_1,&local_48);
  if (((uVar4 & 1) == 0) || (local_48 != 0)) {
    if (((DAT_047f1608 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_047f1608), iVar2 != 0)) {
      DAT_047f1600 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x20);
      if (DAT_047f1600 != (undefined8 *)0x0) {
        DAT_047f1600[1] = 0;
        *DAT_047f1600 = 0;
        DAT_047f1600[3] = 0;
        DAT_047f1600[2] = 0;
        *(undefined2 *)DAT_047f1600 = 1;
        *(undefined1 *)((long)DAT_047f1600 + 2) = 0;
      }
      __cxa_guard_release(&DAT_047f1608);
    }
    std::mutex::lock();
                    /* try { // try from 003999ac to 003999b3 has its CatchHandler @ 00399c58 */
    if ((DAT_047f15d8 == (undefined8 *)0x0) ||
       (lVar5 = FUN_0039a248(DAT_047f15d8,param_1), lVar5 == 0)) {
      std::mutex::unlock();
      if (((DAT_047f1608 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_047f1608), iVar2 != 0)) {
        DAT_047f1600 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x20);
        if (DAT_047f1600 != (undefined8 *)0x0) {
          DAT_047f1600[1] = 0;
          *DAT_047f1600 = 0;
          DAT_047f1600[3] = 0;
          DAT_047f1600[2] = 0;
          *(undefined2 *)DAT_047f1600 = 1;
          *(undefined1 *)((long)DAT_047f1600 + 2) = 0;
        }
        __cxa_guard_release(&DAT_047f1608);
      }
      std::mutex::lock();
      if ((DAT_047f15d8 == (undefined8 *)0x0) &&
         (DAT_047f15d8 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x28),
         DAT_047f15d8 != (undefined8 *)0x0)) {
        *(undefined4 *)(DAT_047f15d8 + 4) = 0x3f800000;
        DAT_047f15d8[1] = 0;
        *DAT_047f15d8 = 0;
        DAT_047f15d8[3] = 0;
        DAT_047f15d8[2] = 0;
      }
                    /* try { // try from 00399a18 to 00399a1f has its CatchHandler @ 00399c54 */
      puVar6 = (undefined8 *)FUN_00399c6c(DAT_047f15d8,param_1);
      puVar7 = (ulong *)*puVar6;
      if (puVar7 == (ulong *)0x0) {
        puVar7 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x20);
        if (puVar7 != (ulong *)0x0) {
          if ((*param_1 & 1) == 0) {
            uVar9 = param_1[1];
            uVar4 = *param_1;
            puVar7[2] = param_1[2];
            puVar7[1] = uVar9;
            *puVar7 = uVar4;
          }
          else {
            uVar4 = param_1[1];
            __src = (void *)param_1[2];
            if (uVar4 < 0x17) {
              __dest = (byte *)((long)puVar7 + 1);
              *(byte *)puVar7 = (byte)((int)uVar4 << 1);
            }
            else {
              if (0xffffffffffffffef < uVar4) {
                    /* try { // try from 00399c44 to 00399c4b has its CatchHandler @ 00399c4c */
                    /* WARNING: Subroutine does not return */
                std::__basic_string_common<true>::__throw_length_error();
              }
              uVar9 = uVar4 + 0x10 & 0xfffffffffffffff0;
              __dest = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar9);
              puVar7[1] = uVar4;
              puVar7[2] = (ulong)__dest;
              *puVar7 = uVar9 | 1;
            }
            memcpy(__dest,__src,uVar4 + 1);
          }
          puVar7[3] = 0;
        }
                    /* try { // try from 00399ab8 to 00399ac3 has its CatchHandler @ 00399c50 */
        FUN_0039ad2c(&local_58,puVar7);
        puVar8 = local_58;
        local_58 = (undefined8 *)0x0;
        puVar10 = (undefined8 *)puVar7[3];
        puVar7[3] = (ulong)puVar8;
        if (puVar10 == (undefined8 *)0x0) {
          local_58 = (undefined8 *)0x0;
        }
        else {
          (**(code **)*puVar10)(puVar10);
          FUN_0049e790(PTR_LAB_047cba48,puVar10);
          puVar8 = local_58;
          local_58 = (undefined8 *)0x0;
          if (puVar8 != (undefined8 *)0x0) {
            (**(code **)*puVar8)(puVar8);
            FUN_0049e790(PTR_LAB_047cba48,puVar8);
          }
          puVar8 = (undefined8 *)puVar7[3];
        }
        if (puVar8 == (undefined8 *)0x0) {
          puVar7[3] = 0;
          if ((*puVar7 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,puVar7[2]);
          }
          FUN_0049e790(PTR_LAB_047cba48,puVar7);
          puVar7 = puVar3;
        }
        *puVar6 = puVar7;
      }
      *param_2 = puVar7;
      puVar7 = (ulong *)*puVar6;
    }
    else {
      *param_2 = *(undefined8 *)(lVar5 + 0x28);
      puVar7 = *(ulong **)(lVar5 + 0x28);
    }
    bVar1 = puVar7 != puVar3;
    std::mutex::unlock();
  }
  else {
    *param_2 = puVar3;
    bVar1 = true;
  }
  return bVar1;
}


