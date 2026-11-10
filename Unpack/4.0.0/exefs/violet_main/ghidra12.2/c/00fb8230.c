/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fb8230; name: FUN_00fb8230
 */


void FUN_00fb8230(undefined8 *param_1,long param_2,byte *param_3,long *param_4,long param_5)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  byte *pbVar16;
  int *piVar17;
  char *pcVar18;
  ulong uVar19;
  ulong local_1e8;
  undefined **local_1d8;
  long *local_1d0;
  long *local_1c8;
  undefined **local_1c0 [15];
  uint auStack_148 [4];
  undefined8 local_138;
  undefined4 local_130;
  locale alStack_128 [8];
  undefined **local_120;
  long *local_118;
  long *local_110;
  undefined **local_108;
  undefined4 local_100;
  long local_f8;
  long local_f0;
  undefined4 local_e4;
  uint auStack_90 [4];
  undefined8 local_80;
  uint local_78;
  char local_6c [12];
  
  lVar15 = tpidr_el0;
  plVar11 = *(long **)(lVar15 + 0x30);
  local_118 = param_4;
  if (plVar11 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar11 = DAT_04859430;
    *(long **)(lVar15 + 0x30) = DAT_04859430;
  }
  local_110 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x20,8);
  local_110[1] = 0x100000001;
  local_110[2] = (long)param_4;
  *local_110 = (long)&PTR_LAB_04546b38;
  local_120 = &PTR__ostream_04546af0;
  local_108 = &PTR__ostream_04546b18;
  std::ios_base::init((ios *)&local_108);
  local_78 = 0xffffffff;
  local_80 = 0;
  local_120 = &PTR_LAB_04546a80;
  local_108 = &PTR_LAB_04546aa8;
  if (param_5 == 0) {
    if (*(char *)(param_2 + 0x58) != '\0') {
      FUN_00fba428(&local_1d8,(ios *)&local_108,param_2 + 0x60);
      std::locale::~locale((locale *)&local_1d8);
    }
    if (*(long *)(param_2 + 0x38) != -1) {
      local_f0 = *(long *)(param_2 + 0x38);
    }
    if (*(long *)(param_2 + 0x40) != -1) {
      local_f8 = *(long *)(param_2 + 0x40);
    }
    if (*(byte *)(param_2 + 0x48) != 0) {
      local_78 = (uint)*(byte *)(param_2 + 0x48);
    }
    local_100 = *(undefined4 *)(param_2 + 0x4c);
    uVar8 = (uint)(ios *)&local_108;
    std::ios_base::clear(uVar8);
    local_e4 = *(undefined4 *)(param_2 + 0x54);
    std::ios_base::clear(uVar8);
  }
  else {
    FUN_00fba428(alStack_128,(ios *)&local_108,param_5);
    std::locale::~locale(alStack_128);
    FUN_00fba318(param_2 + 0x38,alStack_128 + (long)(local_120[-3] + 8),param_5);
  }
  (*(code *)param_1[1])(&local_120,*param_1);
  uVar8 = *(uint *)((long)&local_118 + (long)local_120[-3]);
  uVar19 = *(ulong *)((long)auStack_90 + (long)(local_120[-3] + -0x78));
  std::string::resize((ulong)param_3,'\0');
  if (((uVar8 >> 4 & 1) != 0) && (uVar19 != 0)) {
    (*(code *)param_1[2])(&local_120,*param_1);
    pcVar18 = (char *)param_4[5];
    uVar10 = param_4[6] - (long)pcVar18;
    if ((*(byte *)(param_2 + 0x70) >> 1 & 1) == 0) {
      local_1e8 = 0;
    }
    else if ((uVar10 == 0) ||
            ((cVar3 = *pcVar18, cVar5 = FUN_00fba3d4(alStack_128 + (long)(local_120[-3] + 8),0x2b),
             cVar3 != cVar5 &&
             (cVar3 = *pcVar18, cVar5 = FUN_00fba3d4(alStack_128 + (long)(local_120[-3] + 8),0x2d),
             cVar3 != cVar5)))) {
      local_1e8 = 1;
    }
    else {
      local_1e8 = 0;
    }
    if ((uVar10 == uVar19) && ((int)local_1e8 == 0 && (long)uVar19 <= *(long *)(param_2 + 0x68))) {
      std::string::assign((char *)param_3,(ulong)pcVar18);
    }
    else {
      std::string::assign((char *)param_3,(ulong)pcVar18);
      if ((param_4[6] != 0) && (param_4[6] != param_4[5])) {
        (**(code **)(*param_4 + 0x28))(param_4,0,0,0x10);
      }
      if ((param_4[3] != 0) && (param_4[3] != param_4[2])) {
        (**(code **)(*param_4 + 0x28))(param_4,0,0,8);
      }
      plVar11 = *(long **)(lVar15 + 0x30);
      local_1d0 = param_4;
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar15 + 0x30) = DAT_04859430;
      }
      local_1c8 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x20,8);
      *local_1c8 = (long)&PTR_LAB_04546b38;
      local_1c8[1] = 0x100000001;
      local_1c8[2] = (long)param_4;
      local_1d8 = &PTR__ostream_04546af0;
      local_1c0[0] = &PTR__ostream_04546b18;
      std::ios_base::init((ios *)local_1c0);
      local_130 = 0xffffffff;
      local_138 = 0;
      local_1d8 = &PTR_LAB_04546a80;
      local_1c0[0] = &PTR_LAB_04546aa8;
      FUN_00fba318(param_2 + 0x38,(ios *)local_1c0,param_5);
      (*(code *)param_1[1])(&local_1d8,*param_1);
      *(undefined8 *)((long)local_1c0 + (long)local_1d8[-3]) = 0;
      if ((int)local_1e8 != 0) {
        local_6c[0] = ' ';
        std::__put_character_sequence<char,std::char_traits<char>>((ostream *)&local_1d8,local_6c,1)
        ;
      }
      (*(code *)param_1[2])(&local_1d8,*param_1);
      uVar12 = param_4[5];
      uVar14 = param_4[6];
      if ((uVar14 == uVar12) && ((*(byte *)(param_2 + 0x70) >> 1 & 1) != 0)) {
        local_6c[0] = ' ';
        local_1e8 = 1;
        std::__put_character_sequence<char,std::char_traits<char>>((ostream *)&local_1d8,local_6c,1)
        ;
        uVar12 = param_4[5];
        uVar14 = param_4[6];
      }
      uVar2 = uVar14 - uVar12;
      if (*(ulong *)(param_2 + 0x68) <= uVar14 - uVar12) {
        uVar2 = *(ulong *)(param_2 + 0x68);
      }
      if (uVar19 < uVar2 || uVar19 - uVar2 == 0) {
        std::string::assign((char *)param_3,uVar12);
      }
      else {
        uVar14 = uVar2;
        if (uVar10 + local_1e8 <= uVar2) {
          uVar14 = uVar10 + local_1e8;
        }
        uVar10 = local_1e8;
        if (local_1e8 < uVar14) {
          lVar15 = 0;
          do {
            pbVar16 = *(byte **)(param_3 + 0x10);
            if ((*param_3 & 1) == 0) {
              pbVar16 = param_3 + 1;
            }
            if (*(byte *)(uVar12 + local_1e8 + lVar15) != pbVar16[lVar15]) {
              uVar10 = local_1e8 + lVar15;
              goto LAB_00fb86b0;
            }
            lVar15 = lVar15 + 1;
          } while ((local_1e8 - uVar14) + lVar15 != 0);
          uVar10 = uVar14;
        }
LAB_00fb86b0:
        if (uVar2 <= uVar10) {
          uVar10 = local_1e8;
        }
        std::string::assign((char *)param_3,uVar12);
        puVar13 = local_1d8[-3];
        if (*(int *)((long)auStack_148 + (long)puVar13) == -1) {
          uVar8 = FUN_00fba3d4((undefined *)((long)local_1c0 + (long)(puVar13 + -0x18)),0x20);
          *(uint *)((long)auStack_148 + (long)puVar13) = uVar8 & 0xff;
        }
        std::string::append((ulong)param_3,(char)(uVar19 - uVar2));
        std::string::append((char *)param_3,uVar12 + uVar10);
      }
      std::ostream::~ostream((ostream *)&local_1d8);
      plVar11 = local_1c8;
      if (local_1c8 != (long *)0x0) {
        plVar1 = local_1c8 + 1;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          piVar17 = (int *)((long)local_1c8 + 0xc);
          (**(code **)(*local_1c8 + 0x10))(local_1c8);
          do {
            iVar9 = *piVar17;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar4) {
              *piVar17 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 + -1 == 0) {
            (**(code **)(*plVar11 + 0x18))(plVar11);
          }
        }
      }
      std::ios::~ios((ios *)local_1c0);
    }
    goto LAB_00fb841c;
  }
  if (0 < (long)uVar19) {
    *(undefined8 *)((long)auStack_90 + (long)(local_120[-3] + -0x78)) = 0;
  }
  (*(code *)param_1[2])(&local_120,*param_1);
  pcVar18 = (char *)param_4[5];
  if ((*(byte *)(param_2 + 0x70) >> 1 & 1) == 0) {
LAB_00fb83b8:
    uVar6 = 0;
  }
  else {
    if ((char *)param_4[6] != pcVar18) {
      cVar3 = *pcVar18;
      cVar5 = FUN_00fba3d4(alStack_128 + (long)(local_120[-3] + 8),0x2b);
      if ((cVar3 == cVar5) ||
         (cVar3 = *pcVar18, cVar5 = FUN_00fba3d4(alStack_128 + (long)(local_120[-3] + 8),0x2d),
         cVar3 == cVar5)) goto LAB_00fb83b8;
    }
    uVar6 = FUN_00fba3d4(alStack_128 + (long)(local_120[-3] + 8),0x20);
  }
  uVar12 = *(long *)(param_2 + 0x68) - (ulong)((uVar6 & 0xff) != 0);
  uVar10 = param_4[6] - param_4[5];
  if (uVar12 <= (ulong)(param_4[6] - param_4[5])) {
    uVar10 = uVar12;
  }
  puVar13 = local_120[-3];
  uVar7 = *(uint *)((long)auStack_90 + (long)puVar13);
  if (uVar7 == 0xffffffff) {
    uVar7 = FUN_00fba3d4(alStack_128 + (long)(puVar13 + 8),0x20);
    uVar7 = uVar7 & 0xff;
    *(uint *)((long)auStack_90 + (long)puVar13) = uVar7;
  }
  FUN_00fb8ab0(param_3,pcVar18,uVar10,uVar19,uVar7,uVar8,uVar6,*(uint *)(param_2 + 0x70) >> 2 & 1);
LAB_00fb841c:
  if ((param_4[6] != 0) && (param_4[6] != param_4[5])) {
    (**(code **)(*param_4 + 0x28))(param_4,0,0,0x10);
  }
  if ((param_4[3] != 0) && (param_4[3] != param_4[2])) {
    (**(code **)(*param_4 + 0x28))(param_4,0,0,8);
  }
  std::ostream::~ostream((ostream *)&local_120);
  plVar11 = local_110;
  if (local_110 != (long *)0x0) {
    plVar1 = local_110 + 1;
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      piVar17 = (int *)((long)local_110 + 0xc);
      (**(code **)(*local_110 + 0x10))(local_110);
      do {
        iVar9 = *piVar17;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar4) {
          *piVar17 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
  }
  std::ios::~ios((ios *)&local_108);
  return;
}


