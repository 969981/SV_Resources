/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d7ec4; name: FUN_001d7ec4
 */


size_t FUN_001d7ec4(long *param_1,undefined8 param_2,void *param_3,size_t param_4,int *param_5)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  size_t sVar9;
  ulong uVar10;
  int local_34;
  
  local_34 = 0;
  lVar8 = *param_1;
  lVar7 = *(long *)(lVar8 + 0x1e8);
  plVar1 = param_1 + 0xaa;
  iVar2 = FUN_001d8954(plVar1);
  if (iVar2 != 0) {
LAB_001d7f08:
    local_34 = 0x10;
    goto LAB_001d7f0c;
  }
  *(undefined8 *)(lVar7 + 0x278) = 0;
  *(undefined8 *)(lVar7 + 0x270) = 0;
  if (*(char *)(lVar7 + 0x21c) != '\0') {
    uVar5 = *(ulong *)(lVar7 + 0x228);
    uVar6 = (*(long **)(lVar7 + 0x220))[2];
    uVar10 = uVar6 - uVar5;
    if (uVar5 <= uVar6 && uVar10 != 0) {
      if (uVar10 <= param_4) {
        param_4 = uVar10;
      }
      memcpy(param_3,(void *)(**(long **)(lVar7 + 0x220) + uVar5),param_4);
      *(size_t *)(lVar7 + 0x228) = *(long *)(lVar7 + 0x228) + param_4;
      return param_4;
    }
  }
  if ((*(long *)(lVar8 + 0x1520) == 0) || (*(size_t *)(lVar7 + 0x268) == 0)) {
    if (*(void **)(lVar7 + 0x240) != (void *)0x0) {
      if (*(ulong *)(lVar7 + 0x248) <= param_4) {
        param_4 = *(ulong *)(lVar7 + 0x248);
      }
      memcpy(param_3,*(void **)(lVar7 + 0x240),param_4);
      *(size_t *)(lVar7 + 0x240) = *(long *)(lVar7 + 0x240) + param_4;
      *(size_t *)(lVar7 + 0x248) = *(long *)(lVar7 + 0x248) - param_4;
      FUN_001db818(lVar8,"%zd data bytes written\n",param_4);
      if (*(long *)(lVar7 + 0x248) != 0) {
        return param_4;
      }
      *(undefined4 *)(param_1 + 0xbb) = 0;
      *(undefined8 *)(lVar7 + 0x240) = 0;
      *(undefined8 *)(lVar7 + 0x248) = 0;
      iVar2 = FUN_001d7960(param_1,plVar1,&local_34);
      if (iVar2 == 0) {
        return param_4;
      }
      goto LAB_001d7f0c;
    }
    if ((int)param_1[0xbb] == 0) {
      *(void **)(lVar7 + 600) = param_3;
      *(size_t *)(lVar7 + 0x260) = param_4;
      *(undefined8 *)(lVar7 + 0x268) = 0;
      if (param_1[0xb9] != 0) {
        uVar10 = param_1[0xb9] - param_1[0xba];
        lVar4 = param_1[0xb8] + param_1[0xba];
LAB_001d80ac:
        uVar5 = FUN_001f12c0(*plVar1,lVar4,uVar10);
        iVar2 = FUN_001eda84();
        if (iVar2 != 0) {
          uVar3 = FUN_001ed704(uVar5 & 0xffffffff);
          FUN_001db9c8(lVar8,"nghttp2_session_mem_recv() returned %zd:%s\n",uVar5,uVar3);
          local_34 = 0x38;
          goto LAB_001d7f0c;
        }
        if (uVar10 == uVar5) {
          param_1[0xb9] = 0;
          param_1[0xba] = 0;
        }
        else {
          param_1[0xba] = param_1[0xba] + uVar5;
        }
        iVar2 = FUN_001d88cc(lVar8,*plVar1);
        if (iVar2 != 0) {
          local_34 = 0x37;
          goto LAB_001d7f0c;
        }
        iVar2 = FUN_001d8954(plVar1);
        if (iVar2 != 0) goto LAB_001d7f08;
        goto LAB_001d7fcc;
      }
      uVar10 = (*(code *)param_1[0xb7])(param_1,0,param_1[0xb8],0x8000,&local_34);
      if (uVar10 == 0) {
        *param_5 = 0;
        return 0;
      }
      if (uVar10 != 0xffffffffffffffff) {
        lVar4 = param_1[0xb8];
        param_1[0xb9] = uVar10;
        goto LAB_001d80ac;
      }
      if (local_34 != 0x51) {
        FUN_001db9c8(lVar8,"Failed receiving HTTP2 data");
        goto LAB_001d7f0c;
      }
      goto LAB_001d8144;
    }
  }
  else {
    if (*(void **)(lVar7 + 600) != param_3) {
      memmove(param_3,*(void **)(lVar7 + 600),*(size_t *)(lVar7 + 0x268));
      *(size_t *)(lVar7 + 0x260) = param_4 - *(long *)(lVar7 + 0x268);
      *(void **)(lVar7 + 600) = param_3;
    }
    if (((int)param_1[0xbb] == *(int *)(lVar7 + 0x218)) && (*(long *)(lVar7 + 0x240) == 0)) {
      *(undefined4 *)(param_1 + 0xbb) = 0;
      iVar2 = FUN_001d7960(param_1,plVar1,&local_34);
      if (iVar2 != 0) goto LAB_001d7f0c;
    }
LAB_001d7fcc:
    sVar9 = *(size_t *)(lVar7 + 0x268);
    if (sVar9 != 0) {
      *(undefined8 *)(lVar7 + 0x268) = 0;
      if ((int)param_1[0xbb] == *(int *)(lVar7 + 0x218)) {
        return sVar9;
      }
      if (*(char *)(lVar7 + 0x250) == '\0') {
        param_1[0xbc] = param_1[0xbc] - *(long *)(lVar8 + 0x1520);
        *(undefined8 *)(lVar8 + 0x1520) = 0;
        return sVar9;
      }
      return sVar9;
    }
LAB_001d8144:
    if (*(char *)(lVar7 + 0x250) != '\0') {
      sVar9 = FUN_001d982c(param_1,lVar8,lVar7,param_5);
      return sVar9;
    }
  }
  local_34 = 0x51;
LAB_001d7f0c:
  *param_5 = local_34;
  return 0xffffffffffffffff;
}


