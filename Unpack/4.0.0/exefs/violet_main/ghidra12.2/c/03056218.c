/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03056218; name: FUN_03056218
 */


void FUN_03056218(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  char cVar2;
  long *plVar3;
  uint uVar4;
  undefined1 auStack_260 [448];
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  
  *param_1 = 0;
  puVar1 = PTR_DAT_047e4ed8;
  if ((int)param_2 < 0x200) {
    if (0x1ff < (int)param_3) {
      plVar3 = *(long **)PTR_DAT_047e4ed8;
      if ((plVar3 == (long *)0x0) ||
         (cVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,0x22441300), cVar2 != '\0')) {
        local_90 = 1;
        uStack_88 = 0;
        uStack_78 = 0;
        local_a0 = PTR_DAT_047e34b8 + 0x10;
        uStack_98 = 0xffffffff;
        local_70 = 0x1bf;
        local_68 = 0;
        local_80 = auStack_260;
        memset(auStack_260,0,0x1c0);
        FUN_0322bd4c(&local_a0,"Id value cannot fit in tag.",0x1b);
        FUN_03226c50(0x22441300,auStack_260,"../..\\Common/Base/Types/Visualize/hkVdbCmdTag.h",0x96)
        ;
        plVar3 = *(long **)puVar1;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3,0x22441300,0);
        }
      }
    }
    puVar1 = PTR_DAT_047e4ed8;
    if (0x1fe < param_3) {
      param_3 = 0x1ff;
    }
    if (0x1fff < (int)param_4) {
      plVar3 = *(long **)PTR_DAT_047e4ed8;
      if ((plVar3 == (long *)0x0) ||
         (cVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,0x22441300), cVar2 != '\0')) {
        local_90 = 1;
        uStack_88 = 0;
        uStack_78 = 0;
        local_a0 = PTR_DAT_047e34b8 + 0x10;
        uStack_98 = 0xffffffff;
        local_70 = 0x1bf;
        local_68 = 0;
        local_80 = auStack_260;
        memset(auStack_260,0,0x1c0);
        FUN_0322bd4c(&local_a0,"Id value cannot fit in tag.",0x1b);
        FUN_03226c50(0x22441300,auStack_260,"../..\\Common/Base/Types/Visualize/hkVdbCmdTag.h",0x96)
        ;
        plVar3 = *(long **)puVar1;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3,0x22441300,0);
        }
      }
    }
    if (0x1ffe < param_4) {
      param_4 = 0x1fff;
    }
    uVar4 = 0x1ff;
    if (-1 < (int)param_2) {
      uVar4 = param_2 & 0xffff;
    }
    uVar4 = uVar4 | (param_3 & 0x1ff) << 0x16 | (param_4 & 0x1fff) << 9;
  }
  else {
    plVar3 = *(long **)PTR_DAT_047e4ed8;
    if ((plVar3 == (long *)0x0) ||
       (cVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,0x22441301), cVar2 != '\0')) {
      local_90 = 1;
      uStack_88 = 0;
      uStack_78 = 0;
      local_a0 = PTR_DAT_047e34b8 + 0x10;
      uStack_98 = 0xffffffff;
      local_70 = 0x1bf;
      local_68 = 0;
      local_80 = auStack_260;
      memset(auStack_260,0,0x1c0);
      FUN_0322bd4c(&local_a0,"Id value cannot fit in tag.",0x1b);
      FUN_03226c50(0x22441301,auStack_260,"../..\\Common/Base/Types/Visualize/hkVdbCmdTag.h",0xa0);
      plVar3 = *(long **)puVar1;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0x22441301,0);
      }
    }
    uVar4 = 0x80000000;
  }
  *param_1 = uVar4;
  return;
}


