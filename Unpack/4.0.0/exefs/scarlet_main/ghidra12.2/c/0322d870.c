/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0322d870; name: FUN_0322d870
 */


void FUN_0322d870(long param_1,ulong *param_2,int param_3,ulong param_4)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  undefined2 *__s;
  void *__dest;
  undefined1 *puVar6;
  size_t sVar7;
  long *plVar8;
  char *pcVar9;
  undefined1 *puVar10;
  code *pcVar11;
  long lVar12;
  char *pcVar13;
  undefined1 local_54 [16];
  undefined1 local_44 [4];
  
  if (param_3 < 1) {
LAB_0322d8f8:
    if (*(char **)(param_1 + 0x38) != (char *)0x0) {
      sVar7 = strlen(*(char **)(param_1 + 0x38));
      __dest = (void *)*param_2;
      if (param_2[1] < sVar7 + (long)__dest) {
        plVar8 = (long *)param_2[6];
        if (plVar8 != (long *)0x0) {
          __dest = (void *)(**(code **)(*plVar8 + 0x40))(plVar8,param_2,sVar7);
          goto joined_r0x0322d940;
        }
      }
      else {
        *param_2 = sVar7 + (long)__dest;
joined_r0x0322d940:
        if (__dest != (void *)0x0) {
          memcpy(__dest,*(void **)(param_1 + 0x38),sVar7);
        }
      }
      iVar5 = FUN_031c6850(local_54,0x10," (%d)",*(undefined4 *)(param_1 + 0x40));
      __s = (undefined2 *)*param_2;
      puVar6 = (undefined1 *)param_2[1];
      if ((undefined1 *)((long)__s + (long)iVar5) <= puVar6) {
        *param_2 = (ulong)((long)__s + (long)iVar5);
        if (__s == (undefined2 *)0x0) goto LAB_0322d9a4;
LAB_0322d9d4:
        memcpy(__s,local_54,(long)iVar5);
        local_54[0] = 0x3a;
        puVar10 = (undefined1 *)*param_2;
        puVar6 = puVar10 + 1;
        if ((undefined1 *)param_2[1] < puVar6) {
          plVar8 = (long *)param_2[6];
          if (plVar8 == (long *)0x0) {
            memcpy(puVar10,local_54,(long)param_2[1] - (long)puVar10);
            puVar6 = (undefined1 *)param_2[1];
            goto LAB_0322da3c;
          }
          (**(code **)(*plVar8 + 0x30))(plVar8,param_2,local_54,1);
          puVar6 = (undefined1 *)*param_2;
        }
        else {
          *puVar10 = 0x3a;
LAB_0322da3c:
          *param_2 = (ulong)puVar6;
        }
        local_54[0] = 0x20;
        if ((undefined1 *)param_2[1] < puVar6 + 1) {
          plVar8 = (long *)param_2[6];
          if (plVar8 == (long *)0x0) {
            memcpy(puVar6,local_54,(long)param_2[1] - (long)puVar6);
            *param_2 = param_2[1];
          }
          else {
            (**(code **)(*plVar8 + 0x30))(plVar8,param_2,local_54,1);
          }
        }
        else {
          *puVar6 = 0x20;
          *param_2 = (ulong)(puVar6 + 1);
        }
        goto LAB_0322daa0;
      }
      plVar8 = (long *)param_2[6];
      if (plVar8 != (long *)0x0) {
        __s = (undefined2 *)(**(code **)(*plVar8 + 0x40))(plVar8,param_2,(long)iVar5);
        if (__s != (undefined2 *)0x0) goto LAB_0322d9d4;
LAB_0322d9a4:
        __s = (undefined2 *)*param_2;
        puVar6 = (undefined1 *)param_2[1];
      }
      puVar10 = (undefined1 *)((long)__s + 1);
      local_44[0] = 0;
      if (puVar6 < puVar10) {
        plVar8 = (long *)param_2[6];
        if (plVar8 != (long *)0x0) {
          lVar12 = *plVar8;
          puVar6 = local_44;
          goto LAB_0322e030;
        }
        sVar7 = (long)puVar6 - (long)__s;
        puVar6 = local_44;
        goto LAB_0322e058;
      }
      goto LAB_0322e048;
    }
LAB_0322daa0:
    pcVar13 = (&PTR_s_Disabled_046b66e0)[*(byte *)(param_1 + 0x18)];
    sVar7 = strlen(pcVar13);
    __s = (undefined2 *)*param_2;
    puVar10 = (undefined1 *)param_2[1];
    puVar6 = (undefined1 *)(sVar7 + 2 + (long)__s);
    if (puVar6 <= puVar10) {
      *param_2 = (ulong)puVar6;
      if (__s == (undefined2 *)0x0) goto LAB_0322daf0;
LAB_0322db30:
      memcpy(__s,pcVar13,sVar7);
      *(undefined2 *)((long)__s + sVar7) = 0x203a;
      pcVar13 = (char *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffe);
      if ((pcVar13 == (char *)0x0) || (*pcVar13 == '\0')) {
        pcVar9 = (char *)*param_2;
        pcVar13 = pcVar9 + 0xc;
        if ((char *)param_2[1] < pcVar13) {
          plVar8 = (long *)param_2[6];
          if (plVar8 == (long *)0x0) {
            sVar7 = (long)param_2[1] - (long)pcVar9;
            pcVar13 = "<empty text>";
            goto LAB_0322dc48;
          }
          pcVar13 = "<empty text>";
          pcVar11 = *(code **)(*plVar8 + 0x30);
          sVar7 = 0xc;
          goto LAB_0322dbcc;
        }
        pcVar9[8] = 'e';
        pcVar9[9] = 'x';
        pcVar9[10] = 't';
        pcVar9[0xb] = '>';
        *(undefined8 *)pcVar9 = s_<empty_text>_03c5fd64._0_8_;
LAB_0322dc50:
        *param_2 = (ulong)pcVar13;
      }
      else {
        sVar7 = strlen(pcVar13);
        pcVar9 = (char *)*param_2;
        if ((char *)param_2[1] < pcVar9 + sVar7) {
          plVar8 = (long *)param_2[6];
          if (plVar8 == (long *)0x0) {
            sVar7 = (long)param_2[1] - (long)pcVar9;
LAB_0322dc48:
            memcpy(pcVar9,pcVar13,sVar7);
            pcVar13 = (char *)param_2[1];
            goto LAB_0322dc50;
          }
          pcVar11 = *(code **)(*plVar8 + 0x30);
LAB_0322dbcc:
          (*pcVar11)(plVar8,param_2,pcVar13,sVar7);
        }
        else {
          memcpy(pcVar9,pcVar13,sVar7);
          *param_2 = (ulong)(pcVar9 + sVar7);
        }
      }
      if (*(int *)(param_1 + 0x1c) != 0) {
        __s = (undefined2 *)*param_2;
        puVar6 = (undefined1 *)param_2[1];
        if (puVar6 < (undefined1 *)((long)__s + 0xb)) {
          plVar8 = (long *)param_2[6];
          if (plVar8 == (long *)0x0) goto LAB_0322e014;
          __s = (undefined2 *)(**(code **)(*plVar8 + 0x40))(plVar8,param_2,0xb);
        }
        else {
          *param_2 = (ulong)((long)__s + 0xb);
        }
        if (__s == (undefined2 *)0x0) goto LAB_0322dc90;
        uVar1 = *(uint *)(param_1 + 0x1c);
        *__s = 0x5b20;
        cVar2 = "0123456789ABCDEF"[(ulong)(uVar1 >> 0x18) & 0xf];
        *(char *)(__s + 1) = "0123456789ABCDEF"[uVar1 >> 0x1c];
        cVar3 = "0123456789ABCDEF"[(ulong)(uVar1 >> 0x14) & 0xf];
        *(char *)((long)__s + 3) = cVar2;
        *(char *)(__s + 2) = cVar3;
        *(char *)((long)__s + 5) = "0123456789ABCDEF"[(ulong)(uVar1 >> 0x10) & 0xf];
        *(char *)(__s + 3) = "0123456789ABCDEF"[(ulong)(uVar1 >> 0xc) & 0xf];
        *(char *)((long)__s + 7) = "0123456789ABCDEF"[(ulong)(uVar1 >> 8) & 0xf];
        *(char *)((long)__s + 9) = "0123456789ABCDEF"[(ulong)uVar1 & 0xf];
        *(char *)(__s + 4) = "0123456789ABCDEF"[(ulong)(uVar1 >> 4) & 0xf];
        *(undefined1 *)(__s + 5) = 0x5d;
      }
      lVar12 = *(long *)(param_1 + 0x10);
      if ((*(byte *)(lVar12 + 0x52) & 1) == 0) {
        lVar12 = *(long *)(lVar12 + 0x58);
      }
      pcVar13 = *(char **)(lVar12 + 0x58);
      if (pcVar13 != (char *)0x0) {
        local_54[0] = 0x20;
        puVar10 = (undefined1 *)*param_2;
        puVar6 = puVar10 + 1;
        if ((undefined1 *)param_2[1] < puVar6) {
          plVar8 = (long *)param_2[6];
          if (plVar8 == (long *)0x0) {
            memcpy(puVar10,local_54,(long)param_2[1] - (long)puVar10);
            puVar6 = (undefined1 *)param_2[1];
            goto LAB_0322dd94;
          }
          (**(code **)(*plVar8 + 0x30))(plVar8,param_2,local_54,1);
          puVar6 = (undefined1 *)*param_2;
        }
        else {
          *puVar10 = 0x20;
LAB_0322dd94:
          *param_2 = (ulong)puVar6;
        }
        local_54[0] = 0x5b;
        puVar10 = puVar6 + 1;
        if ((undefined1 *)param_2[1] < puVar10) {
          plVar8 = (long *)param_2[6];
          if (plVar8 == (long *)0x0) {
            memcpy(puVar6,local_54,(long)param_2[1] - (long)puVar6);
            puVar10 = (undefined1 *)param_2[1];
            goto LAB_0322ddf4;
          }
          (**(code **)(*plVar8 + 0x30))(plVar8,param_2,local_54,1);
          puVar10 = (undefined1 *)*param_2;
        }
        else {
          *puVar6 = 0x5b;
LAB_0322ddf4:
          *param_2 = (ulong)puVar10;
        }
        sVar7 = strlen(pcVar13);
        puVar6 = puVar10 + sVar7;
        if ((undefined1 *)param_2[1] < puVar6) {
          plVar8 = (long *)param_2[6];
          if (plVar8 == (long *)0x0) {
            memcpy(puVar10,pcVar13,(long)param_2[1] - (long)puVar10);
            puVar6 = (undefined1 *)param_2[1];
            goto LAB_0322de60;
          }
          (**(code **)(*plVar8 + 0x30))(plVar8,param_2,pcVar13);
          puVar6 = (undefined1 *)*param_2;
        }
        else {
          memcpy(puVar10,pcVar13,sVar7);
LAB_0322de60:
          *param_2 = (ulong)puVar6;
        }
        local_54[0] = 0x5d;
        if ((undefined1 *)param_2[1] < puVar6 + 1) {
          plVar8 = (long *)param_2[6];
          if (plVar8 == (long *)0x0) {
            memcpy(puVar6,local_54,(long)param_2[1] - (long)puVar6);
            *param_2 = param_2[1];
          }
          else {
            (**(code **)(*plVar8 + 0x30))(plVar8,param_2,local_54,1);
          }
        }
        else {
          *puVar6 = 0x5d;
          *param_2 = (ulong)(puVar6 + 1);
        }
      }
      local_54[0] = 10;
      puVar6 = (undefined1 *)*param_2;
      if ((undefined1 *)param_2[1] < puVar6 + 1) {
        plVar8 = (long *)param_2[6];
        if (plVar8 == (long *)0x0) {
          memcpy(puVar6,local_54,(long)param_2[1] - (long)puVar6);
          *param_2 = param_2[1];
          uVar4 = s_Stack_trace_is__03c0d950._8_8_;
        }
        else {
          (**(code **)(*plVar8 + 0x30))(plVar8,param_2,local_54,1);
          uVar4 = s_Stack_trace_is__03c0d950._8_8_;
        }
      }
      else {
        *puVar6 = 10;
        *param_2 = (ulong)(puVar6 + 1);
        uVar4 = s_Stack_trace_is__03c0d950._8_8_;
      }
      s_Stack_trace_is__03c0d950._8_8_ = uVar4;
      if (((param_4 & 1) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
        pcVar9 = (char *)*param_2;
        pcVar13 = pcVar9 + 0x10;
        if ((char *)param_2[1] < pcVar13) {
          plVar8 = (long *)param_2[6];
          if (plVar8 == (long *)0x0) {
            memcpy(pcVar9,"Stack trace is:\n",(long)param_2[1] - (long)pcVar9);
            pcVar13 = (char *)param_2[1];
            goto LAB_0322dfa0;
          }
          (**(code **)(*plVar8 + 0x30))(plVar8,param_2,"Stack trace is:\n",0x10);
          pcVar13 = (char *)*param_2;
        }
        else {
          *(undefined8 *)pcVar9 = s_Stack_trace_is__03c0d950._0_8_;
          *(undefined8 *)(pcVar9 + 8) = uVar4;
LAB_0322dfa0:
          *param_2 = (ulong)pcVar13;
        }
        uVar4 = s_Stack_trace_end_03c52d6c._8_8_;
        pcVar9 = pcVar13 + 0x10;
        if ((char *)param_2[1] < pcVar9) {
          plVar8 = (long *)param_2[6];
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x30))(plVar8,param_2,"Stack trace end\n",0x10);
            goto LAB_0322e00c;
          }
          memcpy(pcVar13,"Stack trace end\n",(long)param_2[1] - (long)pcVar13);
          pcVar9 = (char *)param_2[1];
        }
        else {
          *(undefined8 *)pcVar13 = s_Stack_trace_end_03c52d6c._0_8_;
          *(undefined8 *)(pcVar13 + 8) = uVar4;
        }
        *param_2 = (ulong)pcVar9;
      }
LAB_0322e00c:
      __s = (undefined2 *)*param_2;
      puVar6 = (undefined1 *)param_2[1];
      goto LAB_0322e014;
    }
    plVar8 = (long *)param_2[6];
    if (plVar8 != (long *)0x0) {
      __s = (undefined2 *)(**(code **)(*plVar8 + 0x40))(plVar8,param_2);
      if (__s != (undefined2 *)0x0) goto LAB_0322db30;
LAB_0322daf0:
      __s = (undefined2 *)*param_2;
      puVar10 = (undefined1 *)param_2[1];
    }
    local_54[0] = 0;
    if ((undefined1 *)((long)__s + 1) <= puVar10) {
      *(undefined1 *)__s = 0;
      *param_2 = (ulong)((long)__s + 1);
      return;
    }
    plVar8 = (long *)param_2[6];
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x30))(plVar8,param_2,local_54,1);
      return;
    }
    sVar7 = (long)puVar10 - (long)__s;
    puVar6 = local_54;
  }
  else {
    __s = (undefined2 *)*param_2;
    puVar6 = (undefined1 *)param_2[1];
    if (0x4c < param_3) {
      param_3 = 0x4d;
    }
    if (puVar6 < (undefined1 *)((long)__s + (long)param_3)) {
      plVar8 = (long *)param_2[6];
      if (plVar8 != (long *)0x0) {
        __s = (undefined2 *)(**(code **)(*plVar8 + 0x40))(plVar8,param_2,(long)param_3);
        goto joined_r0x0322d8e8;
      }
    }
    else {
      *param_2 = (ulong)((long)__s + (long)param_3);
joined_r0x0322d8e8:
      if (__s != (undefined2 *)0x0) {
        memset(__s,0x20,(long)param_3);
        goto LAB_0322d8f8;
      }
LAB_0322dc90:
      __s = (undefined2 *)*param_2;
      puVar6 = (undefined1 *)param_2[1];
    }
LAB_0322e014:
    local_54[0] = 0;
    puVar10 = (undefined1 *)((long)__s + 1);
    if (puVar10 <= puVar6) {
LAB_0322e048:
      *(undefined1 *)__s = 0;
      goto LAB_0322e060;
    }
    plVar8 = (long *)param_2[6];
    if (plVar8 != (long *)0x0) {
      lVar12 = *plVar8;
      puVar6 = local_54;
LAB_0322e030:
      (**(code **)(lVar12 + 0x30))(plVar8,param_2,puVar6,1);
      return;
    }
    sVar7 = (long)puVar6 - (long)__s;
    puVar6 = local_54;
  }
LAB_0322e058:
  memcpy(__s,puVar6,sVar7);
  puVar10 = (undefined1 *)param_2[1];
LAB_0322e060:
  *param_2 = (ulong)puVar10;
  return;
}


