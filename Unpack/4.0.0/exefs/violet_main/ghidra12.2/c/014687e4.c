/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014687e4; name: FUN_014687e4
 */


char * FUN_014687e4(long param_1,char *param_2,char *param_3,long param_4,undefined4 param_5,
                   undefined4 param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  ulong uVar15;
  long lVar16;
  int local_68;
  int local_64;
  
  if (param_2 == param_3) {
    return param_2;
  }
  uVar1 = *(uint *)(param_1 + 0x18) & 0x1f0;
  uVar15 = (ulong)uVar1;
  cVar2 = *param_2;
  if (cVar2 == '*') {
    pcVar14 = param_2 + 1;
    if (((pcVar14 == param_3) || (uVar1 != 0)) || (*pcVar14 != '?')) {
      uVar15 = tpidr_el0;
      plVar8 = *(long **)(uVar15 + 0x30);
      if (plVar8 == (long *)0x0) {
        if ((DAT_04859438 & 1) == 0) {
LAB_014697f4:
          iVar3 = __cxa_guard_acquire(&DAT_04859438);
          if (iVar3 != 0) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
        }
        plVar8 = DAT_04859430;
        *(long **)(uVar15 + 0x30) = DAT_04859430;
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x10,8);
      lVar9 = *(long *)(param_1 + 0x38);
      uVar12 = *(undefined8 *)(lVar9 + 8);
      *puVar4 = &PTR_LAB_045e6220;
      puVar4[1] = uVar12;
      *(undefined8 *)(lVar9 + 8) = 0;
      plVar8 = *(long **)(uVar15 + 0x30);
      if (plVar8 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar8 = DAT_04859430;
        *(long **)(uVar15 + 0x30) = DAT_04859430;
      }
      puVar5 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x38,8);
      uVar7 = *(undefined4 *)(param_1 + 0x20);
      uVar12 = *(undefined8 *)(param_4 + 8);
      puVar5[3] = 0;
      puVar5[4] = 0xffffffffffffffff;
      puVar5[2] = puVar4;
LAB_014688f4:
      *(undefined4 *)(puVar5 + 5) = uVar7;
      *(undefined4 *)((long)puVar5 + 0x2c) = param_5;
      *(undefined4 *)(puVar5 + 6) = param_6;
      *(undefined1 *)((long)puVar5 + 0x34) = 1;
      *puVar5 = &PTR_FUN_045e6520;
      puVar5[1] = uVar12;
    }
    else {
      uVar15 = tpidr_el0;
      plVar8 = *(long **)(uVar15 + 0x30);
      if (plVar8 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar8 = DAT_04859430;
        *(long **)(uVar15 + 0x30) = DAT_04859430;
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x10,8);
      lVar9 = *(long *)(param_1 + 0x38);
      uVar12 = *(undefined8 *)(lVar9 + 8);
      *puVar4 = &PTR_LAB_045e6220;
      puVar4[1] = uVar12;
      *(undefined8 *)(lVar9 + 8) = 0;
      plVar8 = *(long **)(uVar15 + 0x30);
      if (plVar8 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar8 = DAT_04859430;
        *(long **)(uVar15 + 0x30) = DAT_04859430;
      }
      pcVar14 = param_2 + 2;
      puVar5 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x38,8);
      uVar7 = *(undefined4 *)(param_1 + 0x20);
      uVar12 = *(undefined8 *)(param_4 + 8);
      puVar5[2] = puVar4;
      puVar5[3] = 0;
LAB_01468a20:
      uVar13 = 0xffffffffffffffff;
LAB_01468a24:
      puVar5[4] = uVar13;
      *puVar5 = &PTR_FUN_045e6520;
      puVar5[1] = uVar12;
      *(undefined4 *)(puVar5 + 5) = uVar7;
      *(undefined4 *)((long)puVar5 + 0x2c) = param_5;
      *(undefined4 *)(puVar5 + 6) = param_6;
      *(undefined1 *)((long)puVar5 + 0x34) = 0;
    }
LAB_01468908:
    *(undefined8 *)(param_4 + 8) = 0;
    plVar8 = *(long **)(uVar15 + 0x30);
    if (plVar8 != (long *)0x0) goto LAB_01468924;
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
  }
  else {
    if (cVar2 == '+') {
      if (((param_2 + 1 != param_3) && (uVar1 == 0)) && (param_2[1] == '?')) {
        uVar15 = tpidr_el0;
        plVar8 = *(long **)(uVar15 + 0x30);
        if (plVar8 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar8 = DAT_04859430;
          *(long **)(uVar15 + 0x30) = DAT_04859430;
        }
        puVar4 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x10,8);
        lVar9 = *(long *)(param_1 + 0x38);
        uVar12 = *(undefined8 *)(lVar9 + 8);
        *puVar4 = &PTR_LAB_045e6220;
        puVar4[1] = uVar12;
        *(undefined8 *)(lVar9 + 8) = 0;
        plVar8 = *(long **)(uVar15 + 0x30);
        if (plVar8 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar8 = DAT_04859430;
          *(long **)(uVar15 + 0x30) = DAT_04859430;
        }
        pcVar14 = param_2 + 2;
        puVar5 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x38,8);
        uVar7 = *(undefined4 *)(param_1 + 0x20);
        uVar12 = *(undefined8 *)(param_4 + 8);
        puVar5[2] = puVar4;
        puVar5[3] = 1;
        goto LAB_01468a20;
      }
      uVar15 = tpidr_el0;
      plVar8 = *(long **)(uVar15 + 0x30);
      if (plVar8 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar8 = DAT_04859430;
        *(long **)(uVar15 + 0x30) = DAT_04859430;
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x10,8);
      lVar9 = *(long *)(param_1 + 0x38);
      uVar12 = *(undefined8 *)(lVar9 + 8);
      *puVar4 = &PTR_LAB_045e6220;
      puVar4[1] = uVar12;
      *(undefined8 *)(lVar9 + 8) = 0;
      plVar8 = *(long **)(uVar15 + 0x30);
      if (plVar8 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar8 = DAT_04859430;
        *(long **)(uVar15 + 0x30) = DAT_04859430;
      }
      puVar5 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x38,8);
      uVar7 = *(undefined4 *)(param_1 + 0x20);
      uVar12 = *(undefined8 *)(param_4 + 8);
      puVar5[4] = 0xffffffffffffffff;
      puVar5[2] = puVar4;
      puVar5[3] = 1;
LAB_01468b04:
      pcVar14 = param_2 + 1;
      *(undefined4 *)(puVar5 + 5) = uVar7;
      *(undefined4 *)((long)puVar5 + 0x2c) = param_5;
      *puVar5 = &PTR_FUN_045e6520;
      puVar5[1] = uVar12;
      *(undefined4 *)(puVar5 + 6) = param_6;
      *(undefined1 *)((long)puVar5 + 0x34) = 1;
      goto LAB_01468908;
    }
    if (cVar2 == '?') {
      if (((param_2 + 1 == param_3) || (uVar1 != 0)) || (param_2[1] != '?')) {
        uVar15 = tpidr_el0;
        plVar8 = *(long **)(uVar15 + 0x30);
        if (plVar8 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar8 = DAT_04859430;
          *(long **)(uVar15 + 0x30) = DAT_04859430;
        }
        puVar4 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x10,8);
        lVar9 = *(long *)(param_1 + 0x38);
        uVar12 = *(undefined8 *)(lVar9 + 8);
        *puVar4 = &PTR_LAB_045e6220;
        puVar4[1] = uVar12;
        *(undefined8 *)(lVar9 + 8) = 0;
        plVar8 = *(long **)(uVar15 + 0x30);
        if (plVar8 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar8 = DAT_04859430;
          *(long **)(uVar15 + 0x30) = DAT_04859430;
        }
        puVar5 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x38,8);
        uVar7 = *(undefined4 *)(param_1 + 0x20);
        uVar12 = *(undefined8 *)(param_4 + 8);
        puVar5[2] = puVar4;
        puVar5[3] = 0;
        puVar5[4] = 1;
        goto LAB_01468b04;
      }
      uVar15 = tpidr_el0;
      plVar8 = *(long **)(uVar15 + 0x30);
      if (plVar8 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar8 = DAT_04859430;
        *(long **)(uVar15 + 0x30) = DAT_04859430;
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x10,8);
      lVar9 = *(long *)(param_1 + 0x38);
      uVar12 = *(undefined8 *)(lVar9 + 8);
      *puVar4 = &PTR_LAB_045e6220;
      puVar4[1] = uVar12;
      *(undefined8 *)(lVar9 + 8) = 0;
      plVar8 = *(long **)(uVar15 + 0x30);
      if (plVar8 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar8 = DAT_04859430;
        *(long **)(uVar15 + 0x30) = DAT_04859430;
      }
      pcVar14 = param_2 + 2;
      puVar5 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x38,8);
      uVar7 = *(undefined4 *)(param_1 + 0x20);
      uVar13 = 1;
      uVar12 = *(undefined8 *)(param_4 + 8);
      puVar5[2] = puVar4;
      puVar5[3] = 0;
      goto LAB_01468a24;
    }
    if (cVar2 != '{') {
      return param_2;
    }
    pcVar14 = param_2 + 1;
    pcVar6 = (char *)FUN_01469cd0(param_1,pcVar14,param_3,&local_64);
    if (pcVar6 == pcVar14) goto LAB_014697bc;
    if (pcVar6 == param_3) {
LAB_014697f0:
      FUN_028a5ca0();
      goto LAB_014697f4;
    }
    if (*pcVar6 == ',') {
      pcVar14 = pcVar6 + 1;
      if (pcVar14 == param_3) goto LAB_014697bc;
      if (*pcVar14 == '}') {
        pcVar14 = pcVar6 + 2;
        if (((uVar1 == 0) && (pcVar14 != param_3)) && (*pcVar14 == '?')) {
          uVar15 = tpidr_el0;
          plVar8 = *(long **)(uVar15 + 0x30);
          if (plVar8 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar8 = DAT_04859430;
            *(long **)(uVar15 + 0x30) = DAT_04859430;
          }
          puVar4 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x10,8);
          lVar9 = *(long *)(param_1 + 0x38);
          uVar12 = *(undefined8 *)(lVar9 + 8);
          *puVar4 = &PTR_LAB_045e6220;
          puVar4[1] = uVar12;
          *(undefined8 *)(lVar9 + 8) = 0;
          plVar8 = *(long **)(uVar15 + 0x30);
          if (plVar8 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar8 = DAT_04859430;
            *(long **)(uVar15 + 0x30) = DAT_04859430;
          }
          pcVar14 = pcVar6 + 3;
          puVar5 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x38,8);
          uVar7 = *(undefined4 *)(param_1 + 0x20);
          uVar12 = *(undefined8 *)(param_4 + 8);
          puVar5[2] = puVar4;
          puVar5[3] = (long)local_64;
          goto LAB_01468a20;
        }
        uVar15 = tpidr_el0;
        plVar8 = *(long **)(uVar15 + 0x30);
        if (plVar8 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar8 = DAT_04859430;
          *(long **)(uVar15 + 0x30) = DAT_04859430;
        }
        puVar4 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x10,8);
        lVar9 = *(long *)(param_1 + 0x38);
        uVar12 = *(undefined8 *)(lVar9 + 8);
        *puVar4 = &PTR_LAB_045e6220;
        puVar4[1] = uVar12;
        *(undefined8 *)(lVar9 + 8) = 0;
        plVar8 = *(long **)(uVar15 + 0x30);
        if (plVar8 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar8 = DAT_04859430;
          *(long **)(uVar15 + 0x30) = DAT_04859430;
        }
        puVar5 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x38,8);
        uVar7 = *(undefined4 *)(param_1 + 0x20);
        uVar12 = *(undefined8 *)(param_4 + 8);
        puVar5[2] = puVar4;
        puVar5[3] = (long)local_64;
        puVar5[4] = 0xffffffffffffffff;
        goto LAB_014688f4;
      }
      local_68 = -1;
      pcVar6 = (char *)FUN_01469cd0(param_1,pcVar14,param_3,&local_68);
      if (((pcVar6 != pcVar14) && (pcVar6 != param_3)) && (*pcVar6 == '}')) {
        lVar9 = (long)local_68;
        if (local_64 <= local_68) {
          pcVar14 = pcVar6 + 1;
          if (((uVar1 == 0) && (pcVar14 != param_3)) && (*pcVar14 == '?')) {
            lVar16 = tpidr_el0;
            plVar8 = *(long **)(lVar16 + 0x30);
            if (plVar8 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar8 = DAT_04859430;
              *(long **)(lVar16 + 0x30) = DAT_04859430;
            }
            puVar4 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x10,8);
            lVar10 = *(long *)(param_1 + 0x38);
            uVar12 = *(undefined8 *)(lVar10 + 8);
            *puVar4 = &PTR_LAB_045e6220;
            puVar4[1] = uVar12;
            *(undefined8 *)(lVar10 + 8) = 0;
            plVar8 = *(long **)(lVar16 + 0x30);
            if (plVar8 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar8 = DAT_04859430;
              *(long **)(lVar16 + 0x30) = DAT_04859430;
            }
            pcVar14 = pcVar6 + 2;
            puVar5 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x38,8);
            uVar7 = *(undefined4 *)(param_1 + 0x20);
            uVar12 = *(undefined8 *)(param_4 + 8);
            plVar8 = puVar5 + 2;
            *plVar8 = (long)puVar4;
            *puVar5 = &PTR_FUN_045e6520;
            puVar5[1] = uVar12;
            puVar5[3] = (long)local_64;
            puVar5[4] = lVar9;
            *(undefined4 *)(puVar5 + 5) = uVar7;
            *(undefined4 *)((long)puVar5 + 0x2c) = param_5;
            *(undefined4 *)(puVar5 + 6) = param_6;
            *(undefined1 *)((long)puVar5 + 0x34) = 0;
          }
          else {
            lVar16 = tpidr_el0;
            plVar8 = *(long **)(lVar16 + 0x30);
            if (plVar8 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar8 = DAT_04859430;
              *(long **)(lVar16 + 0x30) = DAT_04859430;
            }
            puVar4 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x10,8);
            lVar10 = *(long *)(param_1 + 0x38);
            uVar12 = *(undefined8 *)(lVar10 + 8);
            *puVar4 = &PTR_LAB_045e6220;
            puVar4[1] = uVar12;
            *(undefined8 *)(lVar10 + 8) = 0;
            plVar8 = *(long **)(lVar16 + 0x30);
            if (plVar8 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar8 = DAT_04859430;
              *(long **)(lVar16 + 0x30) = DAT_04859430;
            }
            puVar5 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x38,8);
            uVar7 = *(undefined4 *)(param_1 + 0x20);
            uVar12 = *(undefined8 *)(param_4 + 8);
            plVar8 = puVar5 + 2;
            *plVar8 = (long)puVar4;
            *puVar5 = &PTR_FUN_045e6520;
            puVar5[1] = uVar12;
            *(undefined4 *)(puVar5 + 5) = uVar7;
            *(undefined4 *)((long)puVar5 + 0x2c) = param_5;
            puVar5[3] = (long)local_64;
            puVar5[4] = lVar9;
            *(undefined4 *)(puVar5 + 6) = param_6;
            *(undefined1 *)((long)puVar5 + 0x34) = 1;
          }
          *(undefined8 *)(param_4 + 8) = 0;
          plVar11 = *(long **)(lVar16 + 0x30);
          if (plVar11 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar11 = DAT_04859430;
            *(long **)(lVar16 + 0x30) = DAT_04859430;
          }
          puVar4 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x10,8);
          *puVar4 = &PTR_LAB_045e6580;
          puVar4[1] = puVar5;
          *(undefined8 **)(*(long *)(param_1 + 0x38) + 8) = puVar4;
          *(long *)(param_1 + 0x38) = *plVar8;
          *(undefined8 *)(param_4 + 8) = puVar5;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          return pcVar14;
        }
        goto LAB_014697bc;
      }
      goto LAB_014697f0;
    }
    if (*pcVar6 != '}') {
LAB_014697bc:
                    /* WARNING: Subroutine does not return */
      FUN_028a5c90();
    }
    pcVar14 = pcVar6 + 1;
    if (((uVar1 != 0) || (pcVar14 == param_3)) || (*pcVar14 != '?')) {
      uVar15 = tpidr_el0;
      plVar8 = *(long **)(uVar15 + 0x30);
      if (plVar8 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar8 = DAT_04859430;
        *(long **)(uVar15 + 0x30) = DAT_04859430;
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x10,8);
      lVar9 = *(long *)(param_1 + 0x38);
      uVar12 = *(undefined8 *)(lVar9 + 8);
      *puVar4 = &PTR_LAB_045e6220;
      puVar4[1] = uVar12;
      *(undefined8 *)(lVar9 + 8) = 0;
      plVar8 = *(long **)(uVar15 + 0x30);
      if (plVar8 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar8 = DAT_04859430;
        *(long **)(uVar15 + 0x30) = DAT_04859430;
      }
      puVar5 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x38,8);
      uVar7 = *(undefined4 *)(param_1 + 0x20);
      uVar12 = *(undefined8 *)(param_4 + 8);
      puVar5[4] = (long)local_64;
      puVar5[2] = puVar4;
      puVar5[3] = (long)local_64;
      goto LAB_014688f4;
    }
    uVar15 = tpidr_el0;
    plVar8 = *(long **)(uVar15 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(uVar15 + 0x30) = DAT_04859430;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x10,8);
    lVar9 = *(long *)(param_1 + 0x38);
    uVar12 = *(undefined8 *)(lVar9 + 8);
    *puVar4 = &PTR_LAB_045e6220;
    puVar4[1] = uVar12;
    *(undefined8 *)(lVar9 + 8) = 0;
    plVar8 = *(long **)(uVar15 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(uVar15 + 0x30) = DAT_04859430;
    }
    pcVar14 = pcVar6 + 2;
    puVar5 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x38,8);
    uVar7 = *(undefined4 *)(param_1 + 0x20);
    uVar12 = *(undefined8 *)(param_4 + 8);
    puVar5[4] = (long)local_64;
    puVar5[2] = puVar4;
    puVar5[3] = (long)local_64;
    *(undefined4 *)(puVar5 + 6) = param_6;
    *(undefined1 *)((long)puVar5 + 0x34) = 0;
    *(undefined4 *)(puVar5 + 5) = uVar7;
    *(undefined4 *)((long)puVar5 + 0x2c) = param_5;
    *puVar5 = &PTR_FUN_045e6520;
    puVar5[1] = uVar12;
    *(undefined8 *)(param_4 + 8) = 0;
    plVar8 = *(long **)(uVar15 + 0x30);
    if (plVar8 != (long *)0x0) goto LAB_01468924;
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
  }
  plVar8 = DAT_04859430;
  *(long **)(uVar15 + 0x30) = DAT_04859430;
LAB_01468924:
  puVar4 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x10,8);
  *puVar4 = &PTR_LAB_045e6580;
  puVar4[1] = puVar5;
  *(undefined8 **)(*(long *)(param_1 + 0x38) + 8) = puVar4;
  *(undefined8 *)(param_1 + 0x38) = puVar5[2];
  *(undefined8 **)(param_4 + 8) = puVar5;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return pcVar14;
}


